#include "SoundManager.h"
#include "Framework.h"
#include "CWaves.h"
#include "Vorbis/vorbisfile.h"
#include <iostream>
#define NUMBUFFERS (4)
#define	SERVICE_UPDATE_PERIOD	(20)

using namespace System::Windows::Forms;
SoundManager& SoundManager::Get()
{
	static SoundManager instance;
	return instance;
}

SoundManager::SoundManager()
{
	ALFWInit();

	if (!ALFWInitOpenAL())
	{
		ALFWShutdown();
		return;
	}

	alGenBuffers(1, &uiBuffer);
	alGenSources(1, &uiSource);
}

bool SoundManager::Play(const char* path)
{
	// Load Wave file into OpenAL Buffer
	Stop();
	alSourcei(uiSource, AL_BUFFER, NULL);
	System::String^ extension = System::IO::Path::GetExtension(gcnew System::String(path));
	if (extension == ".wav")
	{
		if (!ALFWLoadWaveToBuffer(path, uiBuffer))
		{
			ALFWprintf("Failed to load %s\n", ALFWaddMediaPath(path));
			return false;
		}
	}
	else if (extension == ".ogg")
	{
		PlayOGG();
	}
	
	alSourcei(uiSource, AL_BUFFER, uiBuffer);
	alSourcei(uiSource, AL_LOOPING, 1);
	
	//alSourceStop(uiSource);
	// Play Source
	alSourcePlay(uiSource);
	return true;
}

void SoundManager::Pause()
{
	alSourcePause(uiSource);
}

void SoundManager::Resume()
{
	alSourcePlay(uiSource);
}

void SoundManager::Stop()
{
	alSourceStop(uiSource);
}

bool SoundManager::IsPlaying()
{
	ALint state;
	alGetSourcei(uiSource, AL_SOURCE_STATE, &state);
	return state == AL_PLAYING;
}

void SoundManager::ChangeVolume(float newVolume)
{
	alSourcef(uiSource, AL_GAIN, newVolume);
}

void SoundManager::ChangeMusicTime(float newTime)
{
	float time = GetMusicDuration() * newTime;
	Stop();
	alSourcef(uiSource, AL_SEC_OFFSET, time);
	alSourcePlay(uiSource);
}

float SoundManager::GetMusicDuration()
{
	ALint sizeInBytes;
	ALint channels;
	ALint bits;

	alGetBufferi(uiBuffer, AL_SIZE, &sizeInBytes);
	alGetBufferi(uiBuffer, AL_CHANNELS, &channels);
	alGetBufferi(uiBuffer, AL_BITS, &bits);

	float lengthInSamples = sizeInBytes * 8 / (channels * bits);

	ALint frequency;

	alGetBufferi(uiBuffer, AL_FREQUENCY, &frequency);

	float durationInSeconds = (float)lengthInSamples / (float)frequency;
	return durationInSeconds;
}

float SoundManager::GetCurrentMusicTime()
{
	float returnValue = 0;
	alGetSourcef(uiSource, AL_SEC_OFFSET, &returnValue);
	return returnValue;
}



SoundManager::~SoundManager()
{
	ALFWShutdownOpenAL();
	ALFWShutdown();
}

void SoundManager::PlayOGG()
{
}
