#pragma once

#include "Soldier.h"

class General : public Soldier
{
public:
	General(const Soldier*);

	Soldier* clone() const override;

	bool command(const Soldier*) const;
	void writeReport() const;
};