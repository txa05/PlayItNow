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
# include "SoundManager.hpp"

namespace filesystem = std::filesystem;
class	SoundManager;

void	search_musics(SoundManager&);

# endif