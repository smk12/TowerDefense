#include <SFML/Graphics.hpp>
#ifndef MENU_H
#define MENU_H

#define fal 0
#define tru 1


class Background
{
	friend class Menu;
	int width;
	int height;
	int tf;

	public:
		Background();
};

class Menu
{
	Background background;


	public:
		Menu();
		void setBackgroundRes(int, int);
		int moo();
		

};

#endif
