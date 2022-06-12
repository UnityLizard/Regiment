#include "Captain.h"

Captain::Captain(const String& name, const unsigned age)
{
	this->name = name;
	this->age = age;
	active = true;
	specialization = Specializations::Assault;
	medalsCount = 0;
}

String Captain::getName() const
{
	String temp("CPT ");
	temp.concat(name);

	return temp;
}

void Captain::soldierInfo() const
{
	std::cout << "Name: CPT ";
	generalInfo();
}

void Captain::command(const Soldier* soldier) const
{
	std::cout << "CPT " << name << " is giving " << soldier->getName() << " an order." << std::endl;
}
