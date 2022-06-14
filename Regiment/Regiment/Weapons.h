#pragma once
#include "Condition.h"
#include <iostream>

class Weapons
{
protected:
	float weight;
	Condition condition;
public:
	float getWeight()const;
	Condition getCondition()const;

	void fix();
	virtual unsigned int restockAmmo() = 0;
	virtual Weapons* clone()const = 0;
};
