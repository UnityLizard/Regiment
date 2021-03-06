#pragma once

#include "Soldier.h"

class Corporal : public Soldier
{
public:
	Corporal(const Soldier*);

	Soldier* clone() const override;

	void patrol() const;
};