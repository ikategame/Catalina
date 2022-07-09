#include <iostream>
#include <thread>
#include <Windows.h>
#include <string>
#include "io.h"
#include "Log.h"

void game()
{
	int HP = 100;
	while (true)
	{
		HP++;
		std::cout << HP << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}

int MEMusage()
{
	MEMORYSTATUSEX memInfo;
	memInfo.dwLength = sizeof(MEMORYSTATUSEX);
	GlobalMemoryStatusEx(&memInfo);
	return memInfo.dwMemoryLoad;
}

void Print(std::string& text)
{
	std::cout << text << std::endl;
}

int main()
{
	int MEM = MEMusage();
	std::string A = "asd";
	Print(A);

	while (true)
	{
		std::cout << "MEM: " << MEM << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	Log("IKategame");

	int x = getNuM();
	int y = getNuM();
	writeNUm(x + y);

}



