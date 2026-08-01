#ifndef  PLAYIT_HPP
#define  PLAYIT_HPP

#include <iostream>
#include <cerrno>
#include <cstring>
#include <exception>
#include <../SFML/Graphics.hpp>
#include <../SFML/Audio.hpp>
#include <map>
#include <filesystem>

namespace filesystem = std::filesystem;

class	SoundManager
{
	private:
		std::map<int, std::string>	playlist;
	public:
		SoundManager();
		SoundManager(const SoundManager &other);
		const SoundManager&	operator=(const SoundManager &other);
		~SoundManager();
};

void	search_musics();

# endif