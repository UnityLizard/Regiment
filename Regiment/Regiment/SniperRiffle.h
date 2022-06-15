#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_SR = 1002;
class SniperRiffle : public Weapons
{
	static unsigned int ammoReserve;
public:
	SniperRiffle();
	SniperRiffle(const float, const unsigned int);
	
	const unsigned int getAmmoReserve()const;
	void restockAmmo() override;
	Weapons* clone()const;
};
