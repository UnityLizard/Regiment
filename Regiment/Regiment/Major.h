#pragma once

#include "Soldier.h"

class Major : public Soldier
{
public:
	Major(const Soldier*);

	Soldier* clone() const override;

	bool command(const Soldier*) const;
	void writeReport() const;
};