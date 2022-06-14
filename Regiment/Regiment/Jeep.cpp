#include"Jeep.h"
Machinery* Jeep::clone() const
{
	return new Jeep(*this);
}