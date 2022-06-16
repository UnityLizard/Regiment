#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_SR = 1002;

class SniperRiffle : public Weapons
{
	static unsigned int ammoReserve;
public:
	SniperRiffle();
	
	const unsigned int getAmmoReserve()const;

	Weapons* clone()const;

	void restockAmmo() override;
};

unsigned SniperRiffle::ammoReserve = 0;