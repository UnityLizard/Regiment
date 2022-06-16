#include"Anti_Tank.h"

Anti_Tank::Anti_Tank()
{
	crewSize = 2;
	type = MachineryType::AntiTank;
	condition = Condition::Perfect;
}

const unsigned Anti_Tank::getRoundsReserve() const
{
	return roundsReserve;
}

Machinery* Anti_Tank::clone() const
{
	return new Anti_Tank(*this);
}

void Anti_Tank::restockRounds() const
{
	roundsReserve = MAX_ANTI_TANK_ROUNDS;
}