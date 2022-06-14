#pragma once
#include"Artillery.h"

class Mortar: public Artillery
{
protected:
	static unsigned roundsReserved;
public:
	unsigned restockRounds() override;
	Machinery* clone() const override;

};