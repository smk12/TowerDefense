#include <SFML/Graphics.hpp>
#include "menu.h"
#ifndef GAME_H
#define GAME_H

class Game
{
	friend class Menu;
	enum gameState{menuS};
	Menu menu;
	int x;							//x coordinate from click event
	int y;							//y coordinate from click event
	int m;							// 0:left click	  1:right click
	

	public:
		Game();
		void click(sf::Vector2i, int);
		void setMenuRes(int, int);

};

#endif
