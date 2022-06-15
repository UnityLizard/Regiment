#include "Pistol.h"

Pistol::Pistol()
{
	this->condition = Condition::Perfect;
	type = WeaponType::Pistol;
	ammoReserve = 0;
	caliber = 9; //most common one
}

Pistol::Pistol(const float caliber, const unsigned int ammo)
{
	this->caliber = caliber;
	this->condition = Condition::Perfect;
	type = WeaponType::Pistol;
	this->ammoReserve = ammo;
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