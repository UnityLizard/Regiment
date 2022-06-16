#include "Heavy_Tank.h"

const unsigned MAX_HEAVY_TANK_ROUNDS_RESERVE = 75;
unsigned Heavy_Tank::roundsReserve = 0;

Heavy_Tank::Heavy_Tank()
{
	crewSize = 4;
	type = MachineryType::HeavyTank;
	condition = Condition::Perfect;
	kmh = 20;
	fuelConsumption = 25;
	armorThickness = 25;
}

const unsigned Heavy_Tank::getRoundsReserve() const
{
	return roundsReserve;
}

Machinery* Heavy_Tank::clone() const
{
	return new Heavy_Tank(*this);
}

void Heavy_Tank::restockRounds()
{
	roundsReserve = MAX_HEAVY_TANK_ROUNDS_RESERVE;
}