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

	uiBuffer = new unsigned int;
	alGenBuffers(1, uiBuffer);

	uiSource = new unsigned int;
	alGenSources(1, uiSource);

	alSourcei(*uiSource, AL_BUFFER, *uiBuffer);
}

bool SoundManager::Play(const char* path)
{

	if (!ALFWInitOpenAL())
	{
		ALFWShutdown();
		return false;
	}

	// Generate an AL Buffer


	// Load Wave file into OpenAL Buffer
	if (!ALFWLoadWaveToBuffer(path, *uiBuffer))
	{
		ALFWprintf("Failed to load %s\n", ALFWaddMediaPath(path));
		return false;
	}

	alSourceStop(*uiSource);
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
