#include <iostream>
#include "character.h"

Character::Character()
{
	m_health = 0;
	m_damage = 0;
}

Character::Character(float health, float damage)
{
	m_health = health;
	m_damage = damage;
}

Character::Character(float health, float maxH, float damage)
{
	m_health = health;
	m_maxHealth = maxH;
	m_damage = damage;
}

void Character::attack(Character opponent)
{
	opponent.takeDamage(getDamage());
}

void Character::takeDamage(float damage)
{
	m_health -= damage;
}

void Character::resetHealth(Character player)
{
	player.m_health = player.m_maxHealth;
}

void Character::printStats()
{
	std::cout << "Health: ";
	std::cout << m_health << std::endl;

	std::cout << "Damage ";
	std::cout << m_damage << std::endl;
}