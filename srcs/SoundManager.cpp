# include "../includes/SoundManager.hpp"

SoundManager::SoundManager() : count(0)
{}

const SoundManager&	SoundManager::operator=(const SoundManager& other)
{
	if (this != &other)
		this->playlist = other.playlist;
	return (*this);
}

SoundManager::SoundManager(const SoundManager& other)
{
	this->playlist = other.playlist;
}

SoundManager::~SoundManager()
{}

void	SoundManager::addSong(const std::string& song_name)
{
	playlist[count] = song_name;
	count++;
}