#include "../includes/playIt.hpp"

int main()
{
    sf::RenderWindow window(
        sf::VideoMode({800, 600}),
        "Test SFML"
    );

    while (window.isOpen())
    {
        while (auto event = window.pollEvent())
        {
            if (event && event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.display();
    }

    return 0;
}