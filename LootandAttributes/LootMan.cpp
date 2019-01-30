#include "LootMan.h"


LootDrop::DROPPED LootMan::calc_drop(Enemy enemy, Player player)
{
	int drop = (rand() % 100 + 1) + player.return_luck();
	player.add_exp(enemy.return_xp());
	player.add_gold(enemy.return_gold());

	if (drop <= enemy.return_ge())
	{

		return LootDrop::DROPPED::GOLD_EXP;
	}

	else if (drop >= enemy.return_gea() && drop < enemy.return_geai())

	{
		//give ammo to all weapons player has equipped
		return LootDrop::DROPPED::GOLD_EXP_AMMO;

	}

	else if (drop >= enemy.return_geai())
	{

		//give ammo to all weapons player has equipped

		int item = (rand() % 100 + 1);
		if (item <= enemy.return_iw())
		{
			//drop weapon
		}
		else if (item >= enemy.return_ia() && item < enemy.return_ip())
		{
			//drop armor
		}
		else if (item >= enemy.return_ip() && item < enemy.return_id())
		{
			//drop potion
		}
		else if (item >= enemy.return_id())
		{

			//drop diamonds
		}

		return LootDrop::DROPPED::GOLD_EXP_AMMO_ITEM;

	}

	else
	{
		//errormsg
	}
}

