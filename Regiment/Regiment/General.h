#pragma once

#include "Soldier.h"

class General : public Soldier
{
public:
	General(const Soldier*);

	String getRank() const override;

	bool command(const Soldier*) const;
	void writeReport() const;
};