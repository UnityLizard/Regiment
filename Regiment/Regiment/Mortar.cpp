#include "Mortar.h"

unsigned Mortar::roundsReserve = 0;

Mortar::Mortar()
{
	crewSize = 2;
	type = MachineryType::Mortar;
	condition = Condition::Perfect;
}

const unsigned Mortar::getRoundsReserve() const
{
	return roundsReserve;
}

Machinery* Mortar::clone() const
{
	return new Mortar(*this);
}

void Mortar::restockRounds()
{
	roundsReserve = MAX_MORTAR_ROUNDS;
}