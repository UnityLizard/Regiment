#pragma once

#include"Artillery.h"

const unsigned MAX_MORTAR_ROUNDS = 200;

class Mortar: public Artillery
{
	static unsigned roundsReserve;
public:
	Mortar();

	const unsigned getRoundsReserve() const;
	
	Machinery* clone() const override;

	void restockRounds() const override;

};

unsigned Mortar::roundsReserve = 0;