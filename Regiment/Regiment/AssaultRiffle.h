#pragma once

#include "Weapons.h"

class AssaultRiffle : public Weapons
{
	static unsigned ammoReserve;
public:
	AssaultRiffle();
	
	const unsigned int getAmmoReserve() const;
	
	Weapons* clone() const override;

	void restockAmmo() override;
};