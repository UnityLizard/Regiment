#include "Vehicle.h"

float Vehicle::fuelReserve = 0.0;

const unsigned Vehicle::getKMH() const
{
	return kmh;
}

const float Vehicle::getFuelReserve() const
{
	return fuelReserve;
}

const float Vehicle::getFuelConsumption() const
{
	return fuelConsumption;
}

void Vehicle::restockFuel()
{
	fuelReserve = MAX_FUEL_RESERVE;
}
