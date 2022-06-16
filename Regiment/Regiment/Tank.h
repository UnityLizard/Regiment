#pragma once
#include"Vehicle.h"
class Tank :public Vehicle
{
	static unsigned roundsReserved;
public:
	virtual void restockRounds() const=0 ;
};