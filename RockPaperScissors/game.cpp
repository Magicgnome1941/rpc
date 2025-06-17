#include "game.h"
#include <iostream>

bool game::isrunning()
{


return true;


}

void game::processinputs()
{
	std::cout << "1\n";
	std::cin >> input;
}

void game::update()
{
	std::cout << "2\n";
}

void game::draw()
{
	std::cout << "3\n";
}

void game::rungame()
{
	while (true)
	{
			
		if (isrunning())
		{
		game::processinputs();
		game::update();
		game::draw();
		}
		else
		{
		return;
		}
	}
}
