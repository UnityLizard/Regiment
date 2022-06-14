#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_AR = 21000;
class AssaultRiffle : public Weapons
{
	static unsigned ammoReserve;
public:
	AssaultRiffle();
	AssaultRiffle(const float caliber, const unsigned int ammo);
	
	unsigned int getAmmoReserve()const;
	unsigned int restockAmmo();
	Weapons* clone() const override;

};
