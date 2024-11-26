#include "SoundManager.h"
#include "Framework.h"
#include "CWaves.h"

#define NUMBUFFERS (4)
#define	SERVICE_UPDATE_PERIOD	(20)

SoundManager& SoundManager::Get()
{
	static SoundManager instance;
	return instance;
}

SoundManager::SoundManager()
{
	ALFWInit();
}

bool SoundManager::Play(const char* path)
{
	
	if (!ALFWInitOpenAL())
	{
		ALFWShutdown();
		return false;
	}

	// Generate an AL Buffer
	if (uiBuffer == nullptr)
	{
		uiBuffer = new unsigned int;
		alGenBuffers(1, uiBuffer);
	}

	// Load Wave file into OpenAL Buffer
	if (!ALFWLoadWaveToBuffer(path, *uiBuffer))
	{
		ALFWprintf("Failed to load %s\n", ALFWaddMediaPath(path));
		return false;
	}

	if (uiSource == nullptr)
	{
		uiSource = new unsigned int;
		alGenSources(1, uiSource);
	}
	else
	{
		alSourceStop(*uiSource);
	}
	// Generate a Source to playback the Buffer
	

	// Attach Source to Buffer
	alSourcei(*uiSource, AL_BUFFER, *uiBuffer);

	// Play Source
	alSourcePlay(*uiSource);
	return true;
}

SoundManager::~SoundManager()
{
	alSourceStop(*uiSource);
	alDeleteSources(1, uiSource);
	alDeleteBuffers(1, uiBuffer);

	delete uiSource;
	delete uiBuffer;

	uiSource = nullptr;
	uiBuffer = nullptr;

	ALFWShutdownOpenAL();
	ALFWShutdown();
}
