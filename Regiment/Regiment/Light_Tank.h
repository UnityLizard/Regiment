#pragma once

#include "Tank.h"

class Light_Tank : public Tank
{
	static unsigned roundsReserve;
public:
	Light_Tank();

	const unsigned getRoundsReserve() const;

	Machinery* clone() const override;

	static void restockRounds();
};