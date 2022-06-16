#pragma once
#include"Artillery.h"

class Mortar: public Artillery
{
protected:
	static unsigned roundsReserved;
public:
	void restockRounds()const override;
	Machinery* clone() const override;

};