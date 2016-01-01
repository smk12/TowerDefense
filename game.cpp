#include "game.h"
#include "graphics.h"
#include "menu.h"


Game::Game()
{
	Menu menu();
}

void Game::click(sf::Vector2i v, int mc)
{
	x = v.x;
	y = v.y;
	m = mc;
	printf("%d", menu.moo());
}

void Game::setMenuRes(int width, int height)
{
	menu.setBackgroundRes(width, height);
}
