# include "../includes/playIt.hpp"

void	search_musics(SoundManager& playlist)
{
	try{
		for (auto entry : filesystem::directory_iterator("/home/tx/Música"))
		{
				std::cout << "found dir: " << entry.path().filename() << std::endl;

				for (auto file : std::filesystem::directory_iterator(entry.path()))
					playlist.addSong(file.path().filename());
		}
	}
	catch (const filesystem::filesystem_error& error)
	{
		std::cerr << "Error: " << error.what() << std::endl;
	}
}