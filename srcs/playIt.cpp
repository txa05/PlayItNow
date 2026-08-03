# include "../includes/playIt.hpp"

int	main(void)
{

	sf::RenderWindow	window(sf::VideoMode({1920, 1080}), "Testing");
	SoundManager	soundManager;

	sf::Music	m;
	sf::Texture	texture;
	
	if (!texture.loadFromFile("externals/images/skip_r.png"))
	{
		std::cerr << "Erro ao ler a textura" << std::endl;
		return (1);
	}

	search_musics(soundManager);
	sf::Sprite	sprite(texture);
	sprite.setPosition({1450.f, 810.f});

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
					// m.play();
					window.close();
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