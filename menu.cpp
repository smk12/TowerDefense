#include "menu.h"


Menu::Menu()
{
	Background background;
}

int Menu::moo()
{
	background.width = 800;
	return background.width;
}

void Menu::setBackgroundRes(int width, int height)
{
	background.width = width;
	background.height = height;
}

Background::Background()
{

}
