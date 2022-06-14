#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_AR;
class AssaultRiffle : public Weapons
{
	static unsigned ammoReserve;
public:
	AssaultRiffle(const float weight, const Condition cond, const unsigned int ammo);
	
	unsigned int getAmmoReserve()const;
	unsigned int restockAmmo();
	Weapons* clone() const override;

};
