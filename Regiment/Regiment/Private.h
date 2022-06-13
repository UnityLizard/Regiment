#pragma once

#include "Soldier.h"
#include "Corporal.h"

class Private : public Soldier
{
public:
	Private(const String&, const unsigned);
	
	String getRank() const override;

	void patrol() const;
};