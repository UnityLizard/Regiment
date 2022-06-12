#pragma once

#include "Soldier.h"

class Private : public Soldier
{
public:
	Private(const String&, const unsigned);
	
	String getName() const override;
	
	void soldierInfo() const override;
	void patrol() const;
};