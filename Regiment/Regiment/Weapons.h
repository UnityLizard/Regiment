#pragma once
#include "Condition.h"
#include <iostream>

class Weapons
{
protected:
	float caliber;
	Condition condition;
	enum Type
	{
		AssaultRiffle,
		MachineGun,
		Pistol,
		SniperRiffle
	};
public:
	float getCaliber()const;
	Condition getCondition()const;
	virtual Type getType()const = 0;

	void fix();
	virtual void restockAmmo() = 0;
	virtual Weapons* clone()const = 0;
};
