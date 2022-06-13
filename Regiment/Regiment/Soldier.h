#pragma once

#include "String.h"
#include "Specializations.h"
#include "Medals.h"

class Soldier
{
protected:
	String name;
	bool active;
	unsigned age;
	Specializations specialization;
	Medals medals[ALL_MEDALS];
	size_t medalsCount = 0;
public:
	virtual String getRank() const = 0;
	String getName() const;
	unsigned getAge() const;
	Specializations getSpecialization() const;
	Medals getMedal(const size_t) const;
	size_t getMedalsCount() const;

	virtual Soldier* clone() const = 0;

	void soldierInfo() const;
	bool isActive() const;
	bool recieveMedal(const Medals);
private:
	void specializationDisplay() const;
	void medalsDisplay(const Medals) const;
};