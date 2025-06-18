#include <random>
#pragma once

int randnum(int lower, int upper)
{

	static std::random_device rd;
	static std::mt19937 gen (rd());
	std::uniform_int_distribution<> dist(lower, upper);

	return dist(gen);

}
