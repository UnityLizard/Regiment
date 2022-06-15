#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_SR = 1002;
class SniperRiffle : public Weapons
{
	static unsigned int ammoReserve;
	Type type = Type::SniperRiffle;
public:
	SniperRiffle();
	SniperRiffle(const float, const unsigned int);
	
	const unsigned int getAmmoReserve()const;
	Type getType()const override;
	void restockAmmo() override;
	Weapons* clone()const;
};
