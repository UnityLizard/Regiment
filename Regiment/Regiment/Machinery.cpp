#include"Machinery.h"

unsigned Machinery::getcrewSize() const
{
	return crewSize;
}
Condition Machinery::getCondition() const
{
	return condition;
}
unsigned Machinery::getWeight() const
{
	return weight;
}
void Machinery::fix()
{
	if (condition != Condition::Perfect)
	{
		condition = Condition::Perfect;
	}
}

