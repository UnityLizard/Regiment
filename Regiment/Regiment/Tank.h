#pragma once

#include "Vehicle.h"

class Tank :public Vehicle
{
protected:
	unsigned armorThickness;
public:
	const unsigned getArmorThickness() const;
};