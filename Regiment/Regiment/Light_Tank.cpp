#include"Light_Tank.h"

Machinery* Light_Tank::clone() const
{
	return new Light_Tank(*this);
}
void Light_Tank::restockRounds()const
{
	roundsReserve = ROUNDS_PREPARED;
}
Light_Tank::Light_Tank()
{
	condition=Perfect;
	fuelConsumption = 10;
	top_speed = 30;
}
