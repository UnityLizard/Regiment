#include "MachineGun.h"

MachineGun::MachineGun()
{
	this->condition = Perfect;
	ammoReserve = 0;
	caliber = 12.7; //most common one
}

MachineGun::MachineGun(const float caliber, const unsigned int ammo)
{
	this->caliber = caliber;
	this->condition = Perfect;
	this->ammoReserve = ammo;
}

const unsigned int MachineGun::getAmmoReserve() const
{
	return ammoReserve;
}

void MachineGun::restockAmmo()
{
	ammoReserve = MAX_AMMO_MG;
}

Weapons* MachineGun::clone() const
{
	return new MachineGun(*this);
}
