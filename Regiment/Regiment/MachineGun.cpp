#include "MachineGun.h"

MachineGun::MachineGun()
{
	this->condition = Condition::Perfect;
	type = WeaponType::MachineGun;
	ammoReserve = 0;
	caliber = 12.7; //most common one
}

MachineGun::MachineGun(const float caliber, const unsigned int ammo)
{
	this->caliber = caliber;
	this->condition = Condition::Perfect;
	type = WeaponType::MachineGun;
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
