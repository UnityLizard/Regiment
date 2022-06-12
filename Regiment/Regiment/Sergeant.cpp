#include "Sergeant.h"

String Sergeant::getName() const
{
	String temp("SGT ");
	temp.concat(name);

	return temp;
}

void Sergeant::soldierInfo() const
{
	std::cout << "Name: SGT ";
	generalInfo();
}

void Sergeant::command(const Soldier* soldier) const
{
	std::cout << "SGT " << name << " is giving " << soldier->getName() << " an order." << std::endl;
}
