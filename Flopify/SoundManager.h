#pragma once
class SoundManager
{
public :
	static SoundManager& Get();
	bool Play(const char* path);
private :
	SoundManager() = default;
	~SoundManager();

	unsigned int uiBuffer;
	unsigned int uiSource;
};

