# ifndef SOUNDMANAGER_HPP
# define SOUNDMANAGER_HPP

# include "playIt.hpp"

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


# endif

