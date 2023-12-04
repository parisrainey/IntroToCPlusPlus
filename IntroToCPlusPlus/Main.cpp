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

/// <summary>
/// Create a function for a character creation menu
/// The function should ask the player to input a health and damage value
/// Create a new dynamically allocated character with the given stats
/// Print the Character's stats in the main function
/// </summary>

Character characterCreation()
{
	float health = 0;
	float damage = 0;

	std::cout << "Please input your health" << std::endl;
	std::cin >> health;

	std::cout << "Please input your damage" << std::endl;
	std::cin >> damage;

	Character* character = new Character(health, damage);
	return *character;
}

int main()
{
	//Two ways to intialize players
	Character player(150, 300, 50);
	Character player2 = Character(200, 500, 5);

	Character* playerPtr = &player;

	//Printing address of the num variable
	int num = 40;

	int* numPtr = &num;

	int* numPtr2 = numPtr;

	std::cout << *numPtr2 << std::endl;

	int test = 132;
	int* numberPtr = &test;
	int* numberPtr2 = numberPtr;

	std::cout << *numberPtr2 << std::endl;

	playerPtr->printStats();


	return 0;
}