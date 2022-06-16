#include "SniperRiffle.h"

const unsigned int MAX_AMMO_SR = 1002;
unsigned SniperRiffle::ammoReserve = 0;

SniperRiffle::SniperRiffle()
{
	weight = 5.4;
	caliber = 7.62;
	type = WeaponType::SniperRiffle;
	condition = Condition::Perfect;
}

const unsigned int SniperRiffle::getAmmoReserve() const
{
	return ammoReserve;
}

void SniperRiffle::restockAmmo()
{
	ammoReserve = MAX_AMMO_SR;
}

Weapons* SniperRiffle::clone() const
{
	return new SniperRiffle(*this);
}