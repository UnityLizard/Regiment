#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_MG;
class MachineGun : public Weapons
{
	static unsigned int ammoReserve;
public:
	MachineGun(const float weight, const Condition cond, const unsigned int ammo);

	const unsigned int getAmmoReserve()const;
	unsigned int restockAmmo();
	Weapons* clone()const;
};

