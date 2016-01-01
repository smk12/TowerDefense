#include "graphics.h"



Graphics::Graphics(sf::RenderWindow &window) : mainWindow(window)
{
	backgroundTexture.loadFromFile("test.jpg");
}

void Graphics::drawBackground()
{
	
	backgroundSprite.setTexture(backgroundTexture);
	mainWindow.draw(backgroundSprite);
	mainWindow.display();
	return;
}
