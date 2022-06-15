#include"Heavy_Tank.h"
Machinery* Heavy_Tank::clone() const
{
	return new Heavy_Tank(*this);
}
unsigned Heavy_Tank::restockRounds() const
{
	return 0;
}