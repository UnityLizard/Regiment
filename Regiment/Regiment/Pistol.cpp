#include "Pistol.h"

Pistol::Pistol(const float weight, const Condition cond, const unsigned int ammo)
{
	this->weight = weight;
	this->condition = cond;
	this->ammoReserve = ammo;
}

const unsigned int Pistol::getAmmoReserve() const
{
	return ammoReserve;
}

unsigned int Pistol::restockAmmo()
{
	if (ammoReserve == 0)
	{
		ammoReserve = MAX_AMMO_P;
	}
	else
	{
		std::cout << "There is still some ammo left!";
	}
}

Weapons* Pistol::clone() const
{
	return new Pistol(*this);
}