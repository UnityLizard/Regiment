#pragma once

#include "Soldier.h"

class Captain : public Soldier
{
public:
	Captain(const Soldier*);

	Soldier* clone() const override;

	bool command(const Soldier*) const;
};