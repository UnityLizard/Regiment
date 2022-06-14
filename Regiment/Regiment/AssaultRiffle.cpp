#include "AssaultRiffle.h"

AssaultRiffle::AssaultRiffle(const float weight, const Condition cond, const unsigned int ammo)
{
	this->weight = weight;
	this->condition = cond;
	this->ammoReserve = ammo;
}

unsigned int AssaultRiffle::getAmmoReserve() const
{
	return ammoReserve;
}

unsigned int AssaultRiffle::restockAmmo()
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

Weapons* AssaultRiffle::clone() const
{
	return new AssaultRiffle(*this);
}
