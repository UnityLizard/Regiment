#include"Anti_Tank.h"
Machinery* Anti_Tank::clone() const
{
	return new Anti_Tank(*this);
}
void Anti_Tank::restockRounds() const
{
	roundsReserved = ROUNDS_PREPARED;
}