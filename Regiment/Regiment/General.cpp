#include "General.h"

String General::getName() const
{
	String temp("GEN ");
	temp.concat(name);

	return temp;
}

void General::soldierInfo() const
{
	std::cout << "Name: GEN ";
	generalInfo();
}

void General::command(const Soldier* soldier) const
{
	std::cout << "GEN " << name << " is giving " << soldier->getName() << " an order." << std::endl;
}
