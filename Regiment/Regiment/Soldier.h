#pragma once

#include "String.h"
#include "Specializations.h"
#include "Medals.h"

class Soldier
{
protected:
	String name;
	unsigned age;
	bool active;
	Specializations specialization;
	Medals medals[ALL_MEDALS];
	size_t medalsCount = 0;
public:
	virtual String getName() const = 0;

	virtual void soldierInfo() const = 0;
	bool isActive() const;
	bool recieveMedal(const Medals);
protected:
	void generalInfo() const;
private:
	void specializationDisplay() const;
	void medalsDisplay(const Medals) const;
};