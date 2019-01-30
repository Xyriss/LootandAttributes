#include "Player.h"

Player::Player()
{
	health = 5;
	//health + equipment health * 10 gives maximum health
	def = 1;
	//each point in def reduces incoming dmg by 1
	dmg = 1;
	//each point in dmg increases outgoing dmg by 1
	luck = 0;

}

int Player::return_luck()
{
	return luck;
}

void Player::add_exp(int exp)
{
	if (exp < exp_to_next_level)
	{
		exp += exp;
	}

	else if (exp == exp_to_next_level)
	{
		lvl += 1;
		exp = 0;
	}

	else if (exp > exp_to_next_level)
	{

		//think pokemon exp 
		int new_exp = exp - exp_to_next_level;
		//calc exp to next level based on formula
		exp = new_exp;


	}
}

void Player::add_gold(int gold)
{
	gold += gold;

}