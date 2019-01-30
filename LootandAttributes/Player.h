#pragma once



class Player
{
protected:
	int health, dmg, def, luck;  //attributes from levels and base
	int e_health, e_dmg, e_def, e_luck; //attributes from equipment
	int exp, gold, lvl, diamond;
	int exp_to_next_level;
	int maxHeath = (health + e_health) * 10, currentHealth;

public:

	Player();
	int return_luck();
	void add_exp(int exp);
	void add_gold(int gold);

};