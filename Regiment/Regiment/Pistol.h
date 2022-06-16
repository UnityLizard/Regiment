#pragma once

#include "Weapons.h"

const unsigned int MAX_AMMO_P = 5010;

class Pistol : public Weapons
{
	static unsigned int ammoReserve;
public:
	Pistol();
	
	const unsigned int getAmmoReserve()const;

	Weapons* clone()const;

	void restockAmmo() override;
};

unsigned Pistol::ammoReserve = 0;