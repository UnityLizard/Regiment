#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_AR = 21000;
class AssaultRiffle : public Weapons
{
	static unsigned ammoReserve;
public:
	AssaultRiffle();
	AssaultRiffle(const float caliber, const unsigned int ammo);
	
	const unsigned int getAmmoReserve()const;
	void restockAmmo() override;
	Weapons* clone() const override;
};

unsigned AssaultRiffle::ammoReserve = 0;
