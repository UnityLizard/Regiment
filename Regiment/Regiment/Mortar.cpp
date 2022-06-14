#include"Mortar.h"

Machinery* Mortar::clone() const
{
	return new Mortar(*this);
}