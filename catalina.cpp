#include <iostream>
#include <thread>
#include "io.h"
#include "Log.h"

void game()
{
	int HP = 100;
	while (true)
	{
		HP--;
		std::cout << HP << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}

int main()
{
	std::cout << "IKategame" << std::endl;
	game();
	int x = getNuM();
	int y = getNuM();
	writeNUm(x + y);
}



