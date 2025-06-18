#pragma once
#include <string>

class game 
{

	private:
	void processinputs();
	void update();
	void draw();
	void init();
	bool isrunning();


	public:
	void rungame();
	std::string input;
	int computermove;
	short int winstate;
	bool inittrue = true;
};
