#include <iostream>
#include "character.h"

int printAdd(int a, int b)
{
	std::cout << "a + b";
	return a + b;
}

int count(int a)
{
	for (int i = 0; i < a; i++)
	{
		std::cout << i << "\n";
		return a;
	}
}

void printArray(int numbers[], int size)
{
	for (int i = 0; i <= size; i++)
	{
		std::cout << numbers[i];
	}
}

int main()
{
	Character player;

	return 0;
}