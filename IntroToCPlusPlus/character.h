#pragma once

class Character
{

public:
	Character();

	/// <param name="health">The amount of damage this character can take before dying.</param>
	/// <param name="damage">The amount of health that will be subtracted from enemy when attacking.</param>
	Character(float health, float damage);
	Character(float health, float maxH, float damage);

	void takeDamage(float damage);
	void attack(Character opponent);
	float getDamage() { return m_damage; }

	float getHealth() { return m_health; }
	float resetHealth() { };
	void resetHealth(Character player);
	
	void printStats();

private:
	float m_health;
	float m_maxHealth;
	float m_damage;
	

};