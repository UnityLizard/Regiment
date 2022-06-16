#include"Heavy_Tank.h"
Machinery* Heavy_Tank::clone() const
{
	return new Heavy_Tank(*this);
}
void Heavy_Tank::restockRounds() const
{
	roundsReserve = ROUNDS_PREPARED;
}
Heavy_Tank::Heavy_Tank()
{
	condition=Perfect;
	fuelConsumption = 20;
	top_speed = 20;
}