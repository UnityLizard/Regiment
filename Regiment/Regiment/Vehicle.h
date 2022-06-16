#pragma once
#include"Machinery.h"
class Vehicle : public Machinery
{
protected:
	unsigned top_speed;
	static unsigned fuelReserve;
	unsigned fuelConsumption;
public:
	bool restockFuel();
	Machinery* clone() const override;
	unsigned getFuelConsumation() const;
};
