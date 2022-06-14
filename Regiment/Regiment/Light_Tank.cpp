#include"Light_Tank.h"

Machinery* Light_Tank::clone() const
{
	return new Light_Tank(*this);
}
unsigned Light_Tank::restockRounds()const
{

}

