#pragma once

#include "Soldier.h"

class Major : public Soldier
{
public:
	String getName() const override;

	void soldierInfo() const override;
	void command(const Soldier*) const;
};