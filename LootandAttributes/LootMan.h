#pragma once
#include "Player.h"
#include "Enemy.h"
#include <stdlib.h>


namespace LootDrop
{
	enum DROPPED { GOLD_EXP, GOLD_EXP_AMMO, GOLD_EXP_AMMO_ITEM };

}

class LootMan
{

protected:

public:

	LootMan();
	LootDrop::DROPPED calc_drop(Enemy enemy, Player player);



};