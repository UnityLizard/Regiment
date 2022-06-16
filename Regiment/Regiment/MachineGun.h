#pragma once

#include "Weapons.h"

class MachineGun : public Weapons
{
	static unsigned int ammoReserve;
public:
	MachineGun();

	const unsigned int getAmmoReserve()const;

	Weapons* clone()const;

	void restockAmmo() override;
};