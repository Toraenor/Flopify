#pragma once
class SoundManager
{
public :
	static SoundManager& Get();
	bool Play(const char* path);
	void Pause();
	void Resume();
	void Stop();
	bool IsPlaying();
	void ChangeVolume(float newVolume);
	void ChangeMusicTime(float newTime);
	float GetMusicDuration();
private :
	SoundManager();
	~SoundManager();

	unsigned int      uiBuffer;
	unsigned int      uiSource;
	int				  iState;
};

