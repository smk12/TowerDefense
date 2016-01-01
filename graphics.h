#include <SFML/Graphics.hpp>
#ifndef GRAPHICS_H
#define GRAPHICS_H

class Graphics
{	
	sf::RenderWindow &mainWindow;
	

	public:
		Graphics(sf::RenderWindow &window);
		void drawBackground();

		sf::Texture backgroundTexture;
		sf::Sprite backgroundSprite;
	
};




#endif
