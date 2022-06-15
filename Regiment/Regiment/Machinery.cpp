#include"Machinery.h"
Machinery::Machinery(Condition Perfect, int x, int y)
{
	condition = Perfect;
	crewSize = x;
	weight = y;
}
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
	if (condition == Condition::Perfect)
	{
		return;
	}
	if (condition == Condition::Good)
	{
		condition = Condition::Perfect;
		return;
	}
	if (condition == Condition::Poor)
	{
		condition = Condition::Perfect;
		return;
	}
	return;
}

