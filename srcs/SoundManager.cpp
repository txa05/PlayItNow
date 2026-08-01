# include "../includes/SoundManager.hpp"

SoundManager::SoundManager()
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