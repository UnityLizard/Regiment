#pragma once

#include "Soldier.h"

class Captain : public Soldier
{
public:
	Captain(const String&, const unsigned);
	
	String getName() const override;

	void soldierInfo() const override;
	void command(const Soldier*) const;
};