#pragma once
#include "Weapons.h"

class SniperRiffle : public Weapons
{
	static unsigned int ammoReserve;
public:
	SniperRiffle();
	
	const unsigned int getAmmoReserve()const;

	Weapons* clone()const;

	void restockAmmo() override;
};