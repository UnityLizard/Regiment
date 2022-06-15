#pragma once
#include "Condition.h"
#include <iostream>

class Weapons
{
protected:
	float caliber;
	Condition condition;
public:
	float getCaliber()const;
	Condition getCondition()const;

	void fix();
	virtual void restockAmmo() = 0;
	virtual Weapons* clone()const = 0;
};
