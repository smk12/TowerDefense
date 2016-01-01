#include <SFML/Graphics.hpp>
#include "graphics.h"
#include "game.h"
#include "menu.h"

#define windowWidth 800
#define windowHeight 600


int main()
{
	//sf::Thread thread(&draw);
	//thread.launch();

	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "My window");
	Game game;
	/*
	sf::Texture background;
	if (!background.loadFromFile("test.jpg"))
	{
		printf("error loading file");
	}
	sf::Sprite bgs;
	bgs.setTexture(background);
	window.draw(bgs);
	window.display();
	*/
	sf::Event event;
	while (window.isOpen())
	{
		
		while (window.pollEvent(event))
		{
			switch (event.type)
			{

				case sf::Event::Closed:
					window.close();
					break;


				case sf::Event::KeyPressed:
					//printf("hi");
					//graphics.drawBackground();
					game.click(sf::Mouse::getPosition(window), 1);
					break;
				case sf::Event::Resized:
					window.setSize(sf::Vector2u(windowWidth, windowHeight));
					break;

				default:
					break;
			}
		}
	}


	return 0;
}
