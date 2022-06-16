#include"Vehicle.h"

const unsigned Vehicle::getKMH() const
{
	return kmh;
}

const unsigned Vehicle::getFuelReserve() const
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
