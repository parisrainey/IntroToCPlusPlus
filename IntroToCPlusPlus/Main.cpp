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
	//Two ways to intialize players
	Character player(150, 50);
	Character player2 = Character(200, 5);


	//Printing address of the num variable
	int num = 40;

	int* numPtr = &num;

	int* numPtr2 = numPtr;

	std::cout << *numPtr2 << std::endl;

	int test = 132;
	int* numberPtr = &test;
	int* numberPtr2 = numberPtr;

	std::cout << *numberPtr2;


	return 0;
}