#pragma once

#include "Soldier.h"

class Lieutenant : public Soldier
{
public:
	Lieutenant(const Soldier*);

	Soldier* clone() const override;

	bool command(const Soldier*) const;
};