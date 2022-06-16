#include"Light_Tank.h"

Light_Tank::Light_Tank()
{
	crewSize = 4;
	type = MachineryType::LightTank;
	condition = Condition::Perfect;
	kmh = 30;
	fuelConsumption = 15;
}

const unsigned Light_Tank::getRoundsReserve() const
{
	return roundsReserve;
}

Machinery* Light_Tank::clone() const
{
	return new Light_Tank(*this);
}

void Light_Tank::restockRounds()const
{
	roundsReserve = MAX_LIGHT_TANK_ROUNDS_RESERVE;
}
