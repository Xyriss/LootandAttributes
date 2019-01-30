#pragma once


class Enemy
{

protected:
	float ge_drop_chance, gea_drop_chance, geai_drop_chance;
	float iw_drop_chance, ia_drop_chance, ip_drop_chance, id_drop_chance;

	int health, dmg, def;
	int exp, gold;

public:
	Enemy();
	float return_ge(), return_gea(), return_geai(), return_iw(),
		return_ia(), return_ip(), return_id();
	int return_xp(), return_gold();
}
;