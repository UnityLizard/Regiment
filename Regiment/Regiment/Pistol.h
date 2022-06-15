#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_P = 5010;
class Pistol : public Weapons
{
	static unsigned int ammoReserve;
	Type type = Type::Pistol;
public:
	Pistol();
	Pistol(const float caliber, const unsigned int ammo);
	
	const unsigned int getAmmoReserve()const;
	Type getType()const override;
	void restockAmmo() override;
	Weapons* clone()const;
};

