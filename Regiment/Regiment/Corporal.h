#pragma once

#include "Soldier.h"

class Corporal : public Soldier
{
public:
	String getName() const override;

	void soldierInfo() const override;
	void patrol() const;
};