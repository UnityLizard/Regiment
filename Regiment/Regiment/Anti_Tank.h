#pragma once
#include"Artillery.h"

class Anti_Tank :public Artillery
{
protected:
	static unsigned roundsReserved;
public:
	void restockRounds() const override;
	Machinery* clone() const override;
};

