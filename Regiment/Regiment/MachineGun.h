#pragma once

#include "Weapons.h"

const unsigned int MAX_AMMO_MG = 120300;

class MachineGun : public Weapons
{
	static unsigned int ammoReserve;
public:
	MachineGun();

	const unsigned int getAmmoReserve()const;

	Weapons* clone()const;

	void restockAmmo() override;
};

unsigned MachineGun::ammoReserve = 0;