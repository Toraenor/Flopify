#pragma once
#include <thread>
#include <mutex>
#include <atomic>
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

	void PlayOGG(const char* path, FILE* pOggVorbisFile);
	void InitVorbisFile();
	void ShutdownVorbisFile();
	unsigned long DecodeOggVorbis(class OggVorbis_File* psOggVorbisFile, char* pDecodeBuffer, unsigned long ulBufferSize, unsigned long ulChannels);
	void Swap(short& s1, short& s2);
	void Update();

	unsigned int      uiBuffer;
	unsigned int      uiSource;
	int				  iState;

	unsigned long	ulFrequency = 0;
	unsigned long	ulFormat = 0;
	unsigned long	ulChannels = 0;
	unsigned long	ulBufferSize;
	unsigned long	ulBytesWritten;
	char* pDecodeBuffer;
	struct OggVorbis_File*	sOggVorbisFile;
	struct vorbis_info* psVorbisInfo;
	std::thread oggThread;
	std::atomic<bool> stopThread = false;
	std::mutex mutex;
};

