#pragma once
#include"Artillery.h"

class Anti_Tank :public Artillery
{
protected:
	static unsigned roundsReserved;
public:
	unsigned restockRounds() override;
	Machinery* clone() const override;
};

