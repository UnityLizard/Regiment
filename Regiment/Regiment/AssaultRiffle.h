#pragma once
#include "Weapons.h"

const unsigned int MAX_AMMO_AR = 21000;
class AssaultRiffle : public Weapons
{
	static unsigned ammoReserve;
	Type type = Type::AssaultRiffle;
public:
	AssaultRiffle();
	AssaultRiffle(const float caliber, const unsigned int ammo);
	
	unsigned int getAmmoReserve()const;
	Type getType()const override;
	void restockAmmo() override;
	Weapons* clone() const override;

};
