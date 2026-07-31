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

	sf::RenderWindow	window(sf::VideoMode({1920, 1080}), "Testing");
	if (!window.isOpen())
		return (1);

	sf::Music	m;
	findSound(m, "externals/songs/test.ogg");
	sf::Texture	texture;
	
	if (!texture.loadFromFile("externals/images/skip_r.png"))
	{
		std::cerr << "Erro ao ler a textura" << std::endl;
		return (1);
	}

	sf::Sprite	sprite(texture);
	sprite.setPosition({1450.f, 810.f});
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
					m.play();
					//window.close();
				}
			}
		}
		window.clear();
		window.draw(sprite);
		window.display();
	}
	m.stop();
	return (0);
}