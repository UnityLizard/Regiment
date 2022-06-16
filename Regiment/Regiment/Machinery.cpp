#include "Machinery.h"

const unsigned Machinery::getcrewSize() const
{
	return crewSize;
}

const MachineryType Machinery::getType() const
{
	return type;
}

const Condition Machinery::getCondition() const
{
	return condition;
}

void Machinery::fix()
{
	if (condition != Condition::Perfect)
	{
		condition = Condition::Perfect;
	}
}

