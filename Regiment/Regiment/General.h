#pragma once

#include "Soldier.h"

class General : public Soldier
{
public:
	String getName() const override;

	void soldierInfo() const override;
	void command(const Soldier*) const;
};