#pragma once
#include"Machinery.h"
class Artillery :public Machinery
{
	static unsigned roundsReserved;
public:
	virtual void restockRounds() const=0;
};