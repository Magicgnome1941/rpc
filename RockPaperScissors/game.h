#pragma once
#include <string>

class game 
{

	private:
	void processinputs();
	void update();
	void draw();
	bool isrunning();


	public:
	void rungame();
	std::string input;


};
