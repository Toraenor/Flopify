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
	if (!ALFWLoadWaveToBuffer(path, uiBuffer))
	{
		MessageBox::Show(System::Reflection::Assembly::GetExecutingAssembly()->Location);
		ALFWprintf("Failed to load %s\n", ALFWaddMediaPath(path));
		return false;
	}
	else
	{
		MessageBox::Show("Success");

	}
	alSourcei(uiSource, AL_BUFFER, uiBuffer);
	alSourcei(uiSource, AL_LOOPING, 1);
	//alSourceStop(uiSource);
	// Play Source
	alSourcePlay(uiSource);
	return true;
}

SoundManager::~SoundManager()
{
	ALFWShutdownOpenAL();
	ALFWShutdown();
}
