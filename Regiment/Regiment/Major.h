#pragma once

#include "Soldier.h"

class Major : public Soldier
{
public:
	Major(const Soldier*);

	String getRank() const override;

	bool command(const Soldier*) const;
	void writeReport() const;
};