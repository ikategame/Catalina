#include <iostream>
#include "Log.h"

int getNuM()
{
	int x;
	Log("enter num");
	std::cin >> x;
	return x;
}

void writeNUm(int x)
{
	std::cout << x << std::endl;
}