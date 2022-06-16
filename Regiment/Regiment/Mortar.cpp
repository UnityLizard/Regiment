#include"Mortar.h"

Machinery* Mortar::clone() const
{
	return new Mortar(*this);
}
void Mortar::restockRounds() const
{
	roundsReserved = ROUNDS_PREPARED;
}