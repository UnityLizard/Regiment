#include "AssaultRiffle.h"

const unsigned int MAX_AMMO_AR = 21000;
unsigned AssaultRiffle::ammoReserve = 0;

AssaultRiffle::AssaultRiffle()
{
	weight = 2.92;
	caliber = 5.56;
	type = WeaponType::AssaultRiffle;
	condition = Condition::Perfect;
}

const unsigned int AssaultRiffle::getAmmoReserve() const
{
	return ammoReserve;
}

void AssaultRiffle::restockAmmo()
{
	ammoReserve = MAX_AMMO_AR;
}

Weapons* AssaultRiffle::clone() const
{
	return new AssaultRiffle(*this);
}
