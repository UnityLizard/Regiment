#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_MG = 120300;
class MachineGun : public Weapons
{
	static unsigned int ammoReserve;
	Type type = Type::MachineGun;
public:
	MachineGun();
	MachineGun(const float caliber, const unsigned int ammo);

	const unsigned int getAmmoReserve()const;
	Type getType()const override;
	void restockAmmo() override;
	Weapons* clone()const;
};

