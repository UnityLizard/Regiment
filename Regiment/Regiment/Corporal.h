#pragma once

#include "Soldier.h"

class Corporal : public Soldier
{
public:
	Corporal(const Soldier*);

	String getRank() const override;

	void patrol() const;
};