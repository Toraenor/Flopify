#pragma once
class SoundManager
{
public :
	static SoundManager& Get();
	bool Play(const char* path);
private :
	SoundManager();
	~SoundManager();

	unsigned int* uiBuffer;
	unsigned int* uiSource;
};

