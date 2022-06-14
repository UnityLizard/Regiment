#include "MachineGun.h"

MachineGun::MachineGun(const float weight, const unsigned int ammo)
{
	this->weight = weight;
	this->condition = Perfect;
	this->ammoReserve = ammo;
}

const unsigned int MachineGun::getAmmoReserve() const
{
	return ammoReserve;
}

unsigned int MachineGun::restockAmmo()
{
	if (ammoReserve == 0)
	{
		ammoReserve = MAX_AMMO_MG;
	}
	else
	{
		std::cout << "There is still some ammo left!";
	}
}

Weapons* MachineGun::clone() const
{
	return new MachineGun(*this);
}
