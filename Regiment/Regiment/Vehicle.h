#pragma once

#include"Machinery.h"

const float MAX_FUEL_RESERVE = 10000;

class Vehicle : public Machinery
{
protected:
	unsigned kmh;
	static unsigned fuelReserve;
	unsigned fuelConsumption;
public:
	const unsigned getKMH() const;
	const unsigned getFuelReserve() const;
	const float getFuelConsumption() const;

	void restockFuel();
};

unsigned Vehicle::fuelReserve = 0;