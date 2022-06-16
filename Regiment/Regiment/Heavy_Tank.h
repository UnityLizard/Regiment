#pragma once
#include"Tank.h"

class Heavy_Tank:public Tank
{
protected:
	static unsigned roundsReserve;
public:
	Heavy_Tank();
	void restockRounds() const override;
	Machinery* clone() const override;
};