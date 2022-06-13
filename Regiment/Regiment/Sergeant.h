#pragma once

#include "Soldier.h"

class Sergeant : public Soldier
{
public:
	Sergeant(const Soldier*, const Specializations);

	String getRank() const override;

	bool command(const Soldier*) const;
};