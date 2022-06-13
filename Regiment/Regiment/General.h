#pragma once

#include "Soldier.h"

class General : public Soldier
{
public:
	General(const Soldier*);

	String getRank() const override;

	Soldier* clone() const override;

	bool command(const Soldier*) const;
	void writeReport() const;
};