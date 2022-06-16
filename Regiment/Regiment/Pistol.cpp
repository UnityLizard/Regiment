#include "Pistol.h"

Pistol::Pistol()
{
	weight = 0.68;
	caliber = 9;
	type = WeaponType::Pistol;
	condition = Condition::Perfect;
}

const unsigned int Pistol::getAmmoReserve() const
{
	return ammoReserve;
}

void Pistol::restockAmmo()
{
	ammoReserve = MAX_AMMO_P;
}

Weapons* Pistol::clone() const
{
	return new Pistol(*this);
}