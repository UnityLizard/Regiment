#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_P;
class Pistol : public Weapons
{
	static unsigned int ammoReserve;
public:
	Pistol(const float weight, const unsigned int ammo);
	
	const unsigned int getAmmoReserve()const;
	unsigned int restockAmmo();
	Weapons* clone()const;
};

