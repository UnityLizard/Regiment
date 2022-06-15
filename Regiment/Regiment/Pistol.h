#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_P = 5010;
class Pistol : public Weapons
{
	static unsigned int ammoReserve;
public:
	Pistol();
	Pistol(const float caliber, const unsigned int ammo);
	
	const unsigned int getAmmoReserve()const;
	void restockAmmo() override;
	Weapons* clone()const;
};

