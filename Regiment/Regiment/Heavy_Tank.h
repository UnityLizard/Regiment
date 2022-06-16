#pragma once

#include"Tank.h"

const unsigned MAX_HEAVY_TANK_ROUNDS_RESERVE = 75;

class Heavy_Tank : public Tank
{
	static unsigned roundsReserve;
public:
	Heavy_Tank();

	const unsigned getRoundsReserve() const;

	Machinery* clone() const override;

	void restockRounds() const override;
};

unsigned Heavy_Tank::roundsReserve = 0;