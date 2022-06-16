#pragma once

#include "Weapons.h"

const unsigned int MAX_AMMO_AR = 21000;

class AssaultRiffle : public Weapons
{
	static unsigned ammoReserve;
public:
	AssaultRiffle();
	
	const unsigned int getAmmoReserve() const;
	
	Weapons* clone() const override;

	void restockAmmo() override;
};

unsigned AssaultRiffle::ammoReserve = 0;