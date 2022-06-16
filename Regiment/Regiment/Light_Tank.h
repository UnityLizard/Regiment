#pragma once

#include"Tank.h"

const unsigned MAX_LIGHT_TANK_ROUNDS_RESERVE = 100;

class Light_Tank : public Tank
{
	static unsigned roundsReserve;
public:
	Light_Tank();

	const unsigned getRoundsReserve() const;

	Machinery* clone() const override;

	void restockRounds() const override;
};

unsigned Light_Tank::roundsReserve = 0;