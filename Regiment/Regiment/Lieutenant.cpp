#include "Lieutenant.h"

String Lieutenant::getName() const
{
	String temp("LT ");
	temp.concat(name);

	return temp;
}

void Lieutenant::soldierInfo() const
{
	std::cout << "Name: LT ";
	generalInfo();
}

void Lieutenant::command(const Soldier* soldier) const
{
	std::cout << "LT " << name << " is giving " << soldier->getName() << " an order." << std::endl;
}
