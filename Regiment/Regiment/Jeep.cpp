#include"Jeep.h"

Jeep::Jeep()
{
	crewSize = 4;
	type = MachineryType::Jeep;
	condition = Condition::Perfect;
	kmh = 70;
	fuelConsumption = 7;
}

Machinery* Jeep::clone() const
{
	return new Jeep(*this);
}
