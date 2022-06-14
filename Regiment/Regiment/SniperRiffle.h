#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_SR;
class SniperRiffle : public Weapons
{
	static unsigned int ammoReserve;
public:
	SniperRiffle(const float, const unsigned int);
	
	const unsigned int getAmmoReserve()const;
	unsigned int restockAmmo();
	Weapons* clone()const;
};
