#pragma once
#include "Condition.h"
#include "WeaponType.h"
#include <iostream>

class Weapons
{
protected:
	float caliber;
	Condition condition;
	WeaponType type;
public:
	float getCaliber()const;
	Condition getCondition()const;
	WeaponType getType()const;

	void fix();
	virtual void restockAmmo() = 0;
	virtual Weapons* clone()const = 0;
};
