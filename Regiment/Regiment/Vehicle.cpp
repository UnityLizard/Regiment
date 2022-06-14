#include"Vehicle.h"
Machinery* Vehicle::clone() const
{
	return new Vehicle(*this);
}
bool Vehicle::restockFuel()
{
	if (fuelReserve <= 0)
	{
		return false;
	}
	return true;
}