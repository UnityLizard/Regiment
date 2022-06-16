#pragma once

#include "Artillery.h"

const unsigned MAX_ANTI_TANK_ROUNDS = 250;

class Anti_Tank :public Artillery
{
	static unsigned roundsReserve;
public:
	Anti_Tank();

	const unsigned getRoundsReserve() const;

	Machinery* clone() const override;

	static void restockRounds();
};
