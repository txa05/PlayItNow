# include "../includes/playIt.hpp"

void	search_musics()
{
	try{
		for (auto entry : filesystem::directory_iterator("./")){
			if (entry.is_directory())
				std::cout << "found dir: " << entry.path() << std::endl;
		}
	}
	catch (const filesystem::filesystem_error& error)
	{
		std::cerr << "Error: " << error.what() << std::endl;
	}
}