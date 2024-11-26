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

bool SoundManager::Play(const char* path)
{
	// Initialize Framework
	ALFWInit();


	if (!ALFWInitOpenAL())
	{
		ALFWShutdown();
		return false;
	}

	// Generate an AL Buffer
	alGenBuffers(1, &uiBuffer);

	// Load Wave file into OpenAL Buffer
	if (!ALFWLoadWaveToBuffer(path, uiBuffer))
	{
		ALFWprintf("Failed to load %s\n", ALFWaddMediaPath(path));
		return false;
	}

	// Generate a Source to playback the Buffer
	alGenSources(1, &uiSource);

	// Attach Source to Buffer
	alSourcei(uiSource, AL_BUFFER, uiBuffer);

	// Play Source
	alSourcePlay(uiSource);
	return true;
}

SoundManager::~SoundManager()
{
	alSourceStop(uiSource);
	alDeleteSources(1, &uiSource);
	alDeleteBuffers(1, &uiBuffer);


	ALFWShutdownOpenAL();
	ALFWShutdown();
}
