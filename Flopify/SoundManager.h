#pragma once
class SoundManager
{
public:
	static SoundManager& Get();
	bool Play(const char* path);
	void Pause();
	void Resume();
	void Stop();
	bool IsPlaying();
	void ChangeVolume(float newVolume);
	void ChangeMusicTime(float newTime);
	float GetMusicDuration();
	float GetCurrentMusicTime();

private:
	SoundManager();
	~SoundManager();

	void PlayOGG(const char* path);
	void InitVorbisFile();
	void ShutdownVorbisFile();
	unsigned long DecodeOggVorbis(class OggVorbis_File* psOggVorbisFile, char* pDecodeBuffer, unsigned long ulBufferSize, unsigned long ulChannels);
	void Swap(short& s1, short& s2);

	unsigned int      uiBuffer;
	unsigned int      uiSource;
	int				  iState;
};

