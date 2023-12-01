#pragma once

class Character
{

public:
	Character();

	/// <param name="health">The amount of damage this character can take before dying.</param>
	/// <param name="damage">The amount of health that will be subtracted from enemy when attacking.</param>
	Character(float health, float damage);

	void takeDamage(float damage);

	void attack(Character opponent);

	float getHealth() { return m_health; }
	float getDamage() { return m_damage; }

private:
	float m_health;
	float m_damage;


};