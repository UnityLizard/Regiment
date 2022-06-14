#include"Artillery.h"

Machinery* Artillery::clone() const
{
	return new Artillery(*this);
}