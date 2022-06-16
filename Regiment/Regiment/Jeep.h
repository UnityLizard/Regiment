#pragma once

#include"Vehicle.h"

class Jeep :public Vehicle
{
public:
	Jeep();
	Machinery* clone() const override;
};