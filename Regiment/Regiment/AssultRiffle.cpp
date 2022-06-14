#include "AssultRiffle.h"

AssultRiffle::AssultRiffle(const float weight, const unsigned int ammo)
{
	this->weight = weight;
	this->condition = Perfect;
	this->ammoReserve = ammo;
}

unsigned int AssultRiffle::getAmmoReserve() const
{
	return ammoReserve;
}

unsigned int AssultRiffle::restockAmmo()
{
	if (ammoReserve == 0)
	{
		ammoReserve = MAX_AMMO_AR;
	}
	else
	{
		std::cout << "There is still some ammo left!";
	}
}

Weapons* AssultRiffle::clone() const
{
	return new AssultRiffle(*this);
}
