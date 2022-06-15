#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_MG = 120300;
class MachineGun : public Weapons
{
	static unsigned int ammoReserve;
public:
	MachineGun();
	MachineGun(const float caliber, const unsigned int ammo);

	const unsigned int getAmmoReserve()const;
	void restockAmmo() override;
	Weapons* clone()const;
};

