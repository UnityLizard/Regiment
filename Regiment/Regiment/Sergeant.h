#pragma once

#include "Soldier.h"

class Sergeant : public Soldier
{
public:
	Sergeant(const Soldier*, const Specializations);

	const char* getRank() const override;

	Soldier* clone() const override;

	bool command(const Soldier*) const;
};