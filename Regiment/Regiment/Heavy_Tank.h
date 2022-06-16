#pragma once

#include "Tank.h"

class Heavy_Tank : public Tank
{
	static unsigned roundsReserve;
public:
	Heavy_Tank();

	const unsigned getRoundsReserve() const;

	Machinery* clone() const override;

	static void restockRounds();
};