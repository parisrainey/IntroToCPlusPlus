#pragma once

class Character
{

public:
	void takeDamage(float damage);

	float getHealth() { return m_health; }
	float getDamage() { return m_damage; }

private:
	float m_health;
	float m_damage;


};