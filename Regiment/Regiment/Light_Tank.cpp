#include "Light_Tank.h"

const unsigned MAX_LIGHT_TANK_ROUNDS_RESERVE = 100;
unsigned Light_Tank::roundsReserve = 0;

Light_Tank::Light_Tank()
{
	crewSize = 4;
	type = MachineryType::LightTank;
	condition = Condition::Perfect;
	kmh = 30;
	fuelConsumption = 15;
	armorThickness = 10;
}

const unsigned Light_Tank::getRoundsReserve() const
{
	return roundsReserve;
}

Machinery* Light_Tank::clone() const
{
	return new Light_Tank(*this);
}

void Light_Tank::restockRounds()
{
	roundsReserve = MAX_LIGHT_TANK_ROUNDS_RESERVE;
}
