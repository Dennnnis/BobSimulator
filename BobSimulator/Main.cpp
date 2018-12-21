#include <iostream>
#include <SFML/Graphics.hpp>

constexpr auto WIDTH = 800;
constexpr auto HEIGHT = 600;

int main()
{
	sf::RenderWindow win(sf::VideoMode(WIDTH, HEIGHT), "Window", sf::Style::Close);
	sf::Event winEvent;
	sf::RectangleShape rectshape(sf::Vector2f(100, 100));
	rectshape.setFillColor(sf::Color::Red);
	rectshape.setPosition(sf::Vector2f(50, 50));

	while (win.isOpen())
	{
		
		while (win.pollEvent(winEvent))
		{
			if (winEvent.type == sf::Event::Closed)
			{
				win.close();
			}
		}

		win.draw(rectshape);
		win.display();
	}

}