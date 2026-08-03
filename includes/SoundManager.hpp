# ifndef SOUNDMANAGER_HPP
# define SOUNDMANAGER_HPP

# include "playIt.hpp"

class	SoundManager
{
	private:
		std::map<unsigned int, std::string>	playlist;
		unsigned int	count;
	public:
		SoundManager();
		SoundManager(const SoundManager &other);
		const SoundManager&	operator=(const SoundManager &other);
		~SoundManager();
		void	addSong(const std::string&);
};


# endif

