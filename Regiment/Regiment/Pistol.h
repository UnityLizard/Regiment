#pragma once

#include "Weapons.h"

class Pistol : public Weapons
{
	static unsigned int ammoReserve;
public:
	Pistol();
	
	const unsigned int getAmmoReserve()const;

	Weapons* clone()const;

	void restockAmmo() override;
};