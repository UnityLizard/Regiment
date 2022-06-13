#pragma once

#include "Soldier.h"

class Corporal : public Soldier
{
public:
	Corporal(const Soldier*);

	String getRank() const override;

	Soldier* clone() const override;

	void patrol() const;
};