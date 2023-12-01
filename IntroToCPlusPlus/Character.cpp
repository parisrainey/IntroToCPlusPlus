#include "Character.h"

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

void Character::attack(Character opponent)
{
	opponent.takeDamage(getDamage());
}

void Character::takeDamage(float damage)
{
	m_health -= damage;
}