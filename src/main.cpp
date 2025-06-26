#include <SFML/Graphics.hpp>

int main()
{

    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "2D Physics Simulator");
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}
