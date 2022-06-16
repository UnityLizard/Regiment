#include"Jeep.h"
Machinery* Jeep::clone() const
{
	return new Jeep(*this);
}
Jeep::Jeep()
{
	condition = Perfect;
	fuelConsumption = 7;
	top_speed = 70;
}