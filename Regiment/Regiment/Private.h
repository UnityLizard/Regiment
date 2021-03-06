#pragma once

#include "Soldier.h"
#include "Corporal.h"

class Private : public Soldier
{
public:
	Private() = delete;
	Private(const String&, const unsigned);

	Soldier* clone() const override;

	void patrol() const;
};