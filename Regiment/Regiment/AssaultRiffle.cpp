#include "AssaultRiffle.h"

AssaultRiffle::AssaultRiffle()
{
	this->condition = Perfect;
	ammoReserve = 0;
	caliber = 5.56; //most common one
}

AssaultRiffle::AssaultRiffle(const float caliber, const unsigned int ammo)
{
	this->caliber = caliber;
	this->condition = Perfect;
	this->ammoReserve = ammo;
}

unsigned int AssaultRiffle::getAmmoReserve() const
{
	return ammoReserve;
}

Weapons::Type AssaultRiffle::getType() const
{
	return type;
}

void AssaultRiffle::restockAmmo()
{
	ammoReserve = MAX_AMMO_AR;
}

Weapons* AssaultRiffle::clone() const
{
	return new AssaultRiffle(*this);
}
