#pragma once

#include "Soldier.h"

class Lieutenant : public Soldier
{
public:
	Lieutenant(const Soldier*);

	String getRank() const override;

	bool command(const Soldier*) const;
};