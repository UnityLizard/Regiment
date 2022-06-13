#pragma once

#include "Soldier.h"

class Captain : public Soldier
{
public:
	Captain(const Soldier*);
	
	String getRank() const override;

	bool command(const Soldier*) const;
};