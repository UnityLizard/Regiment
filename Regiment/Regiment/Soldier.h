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
	virtual const char* getRank() const = 0;
	const char* getName() const;
	const unsigned getAge() const;
	const Specializations getSpecialization() const;
	const Medals getMedal(const size_t) const;
	const size_t getMedalsCount() const;

	virtual Soldier* clone() const = 0;

	void soldierInfo() const;
	bool isActive() const;
	bool recieveMedal(const Medals);
private:
	void specializationDisplay() const;
	void medalsDisplay(const Medals) const;
};