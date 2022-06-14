#include"Tank.h"
Machinery* Tank::clone() const
{
	return new Tank(*this);
}
unsigned Tank::restockRounds() const
{

}
