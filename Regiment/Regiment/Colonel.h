#pragma once

#include "Soldier.h"

class Colonel : public Soldier
{
public:
	Colonel(const Soldier*);

	Soldier* clone() const override;

	bool command(const Soldier*) const;
	void writeReport() const;
};