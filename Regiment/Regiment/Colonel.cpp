#include "Colonel.h"

String Colonel::getName() const
{
	String temp("COL ");
	temp.concat(name);

	return temp;
}

void Colonel::soldierInfo() const
{
	std::cout << "Name: COL ";
	generalInfo();
}

void Colonel::command(const Soldier* soldier) const
{
	std::cout << "COL " << name << " is giving " << soldier->getName() << " an order." << std::endl;
}
