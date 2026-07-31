# include "../includes/playIt.hpp"

void	findSound(sf::Music &music, const std::string &path)
{

	if (!music.openFromFile(path))
	{
		std::cerr << "Failed to open sound file: " << path << std::endl;
		return ;
	}
}

int	main(void)
{

	sf::Window	window(sf::VideoMode({800, 600}), "Testing");
	if (!window.isOpen())
		return (1);

	sf::Music	m;
	findSound(m, "songs/test.ogg");

	//m.play();
	while (window.isOpen())
	{
		while (auto event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
				window.close();
			if (const auto keyboard = event->getIf<sf::Event::KeyPressed>())
			{
				if (keyboard->scancode == sf::Keyboard::Scan::Escape)
				{
					window.close();
				}
			}
		}
	}
	m.stop();
	return (0);
}