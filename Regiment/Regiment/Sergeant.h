#pragma once

#include "Soldier.h"

class Sergeant : public Soldier
{
public:
	Sergeant(const Soldier*, const Specialization);

	Soldier* clone() const override;

	bool command(const Soldier*) const;
};