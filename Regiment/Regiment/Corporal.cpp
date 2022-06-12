#include "Corporal.h"

String Corporal::getName() const
{
	String temp("CPL ");
	temp.concat(name);

	return temp;
}

void Corporal::soldierInfo() const
{
	std::cout << "Name: CPL ";
	generalInfo();
}

void Corporal::patrol() const
{
	std::cout << "CPL " << name << " is patrolling." << std::endl << std::endl;
}
