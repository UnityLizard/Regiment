#include "SniperRiffle.h"

SniperRiffle::SniperRiffle(const float weight, const Condition cond, const unsigned int ammo)
{
	this->weight = weight;
	this->condition = cond;
	this->ammoReserve = ammo;
}

const unsigned int SniperRiffle::getAmmoReserve() const
{
	return ammoReserve;
}

unsigned int SniperRiffle::restockAmmo()
{
	if (ammoReserve == 0)
	{
		ammoReserve = MAX_AMMO_SR;
	}
	else
	{
		std::cout << "There is still some ammo left!";
	}
}

Weapons* SniperRiffle::clone() const
{
	return new SniperRiffle(*this);
}