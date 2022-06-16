#pragma once

#include "Machinery.h"

const float MAX_FUEL_RESERVE = 10000;

class Vehicle : public Machinery
{
protected:
	unsigned kmh;
	static float fuelReserve;
	float fuelConsumption;
public:
	const unsigned getKMH() const;
	const float getFuelReserve() const;
	const float getFuelConsumption() const;

	static void restockFuel();
};