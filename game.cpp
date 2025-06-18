#include "random.h"
#include "game.h"
#include <iostream>
//this comment will appear in the laptop branch
bool game::isrunning()
{

return true;

}

void game::init()
{

if (inittrue)
	{

	std::cout << "Welcome to Rock Paper Scissors!\n";
	inittrue = false;
	
	}

}

int movenum (std::string& move)
{

if (move == "rock") {return 1;}
if (move == "paper") {return 2;}
if (move == "scissors") {return 3;}
return 0;

}

int result [3][3] =
{
	//cpu
	{3,2,1},
	{1,3,2},
	{2,1,3},

};

void game::processinputs()
{
	std::cout << "What is your move: ";
	std::cin >> input;
}

void game::update()
{
	computermove = randnum(1, 3);
	playermove = movenum(input);
	// 1: rock 2: paper 3: scissors
	
	switch (computermove) // winstate 1:win 2:lose 3:tie
		{
		case 1:
			std::cout << "CPU chose rock\n";
			break;
		case 2:
			std::cout << "CPU chose paper\n";
			break;
		case 3:
			std::cout << "CPU chose scissors\n";
			break;
		}

	winstate = result[playermove - 1][computermove - 1];
}

void game::draw()
{
	switch (winstate)
	{
	case 0:
		std::cout << "Thats not a valid move!\n";
		break;
	case 1:
		std::cout << "you win!\n";
		break;
	case 2:
		std::cout << "Bummer! you lose\n";
		break;
	case 3:
		std::cout << "TIE\n";
		break;
	}
}

void game::rungame()
{
	while (true)
	{
		
		if (isrunning())
		{
		game::init();
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
