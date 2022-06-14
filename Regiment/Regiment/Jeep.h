#pragma once
#include"Vehicle.h"

class Jeep :public Vehicle
{
	Machinery* clone() const override;
};