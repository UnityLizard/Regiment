#include "Major.h"

String Major::getName() const
{
	String temp("MAJ ");
	temp.concat(name);

	return temp;
}

void Major::soldierInfo() const
{
	std::cout << "Name: MAJ ";
	generalInfo();
}

void Major::command(const Soldier* soldier) const
{
	std::cout << "MAJ " << name << " is giving " << soldier->getName() << " an order." << std::endl;
}