#pragma once

#include"Vehicle.h"

class Tank :public Vehicle
{
public:
	virtual void restockRounds() const = 0 ;
};