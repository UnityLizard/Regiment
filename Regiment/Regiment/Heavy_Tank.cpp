#include"Heavy_Tank.h"

Heavy_Tank::Heavy_Tank()
{
	crewSize = 4;
	type = MachineryType::HeavyTank;
	condition=Condition::Perfect;
	kmh = 20;
	fuelConsumption = 25;
}

const unsigned Heavy_Tank::getRoundsReserve() const
{
	return roundsReserve;
}

Machinery* Heavy_Tank::clone() const
{
	return new Heavy_Tank(*this);
}

void Heavy_Tank::restockRounds() const
{
	roundsReserve = MAX_HEAVY_TANK_ROUNDS_RESERVE;
}