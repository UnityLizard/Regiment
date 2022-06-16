#pragma once

#include "Condition.h"
#include "MachineryType.h"

class Machinery
{
protected:
	unsigned crewSize;
	MachineryType type;
	Condition condition;
public:
	const unsigned getcrewSize() const;
	const MachineryType getType() const;
	const Condition getCondition() const;

	virtual Machinery* clone() const = 0;

	void fix();
};
