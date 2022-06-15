#include "SniperRiffle.h"

SniperRiffle::SniperRiffle()
{
	this->condition = Perfect;
	ammoReserve = 0;
	caliber = 7.62; //most common one
}

SniperRiffle::SniperRiffle(const float weight, const unsigned int ammo)
{
	this->caliber = caliber;
	this->condition = Perfect;
	this->ammoReserve = ammo;
}

const unsigned int SniperRiffle::getAmmoReserve() const
{
	return ammoReserve;
}

Weapons::Type SniperRiffle::getType() const
{
	return type;
}

void SniperRiffle::restockAmmo()
{
	ammoReserve = MAX_AMMO_SR;
}

Weapons* SniperRiffle::clone() const
{
	return new SniperRiffle(*this);
}