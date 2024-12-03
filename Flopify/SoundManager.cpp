#include "SoundManager.h"
#include "Framework.h"
#include "CWaves.h"
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
	alSourcei(uiSource, AL_BUFFER, NULL);
	if (!ALFWLoadWaveToBuffer(path, uiBuffer))
	{
		ALFWprintf("Failed to load %s\n", ALFWaddMediaPath(path));
		return false;
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


SoundManager::~SoundManager()
{
	ALFWShutdownOpenAL();
	ALFWShutdown();
}
