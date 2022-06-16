#include "MachineGun.h"

const unsigned int MAX_AMMO_MG = 120300;
unsigned MachineGun::ammoReserve = 0;

MachineGun::MachineGun()
{
	weight = 10.5;
	caliber = 12.7;
	type = WeaponType::MachineGun;
	condition = Condition::Perfect;
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
