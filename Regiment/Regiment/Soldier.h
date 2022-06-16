#pragma once

#include "String.h"
#include "Rank.h"
#include "Specialization.h"
#include "Medal.h"

class Soldier
{
protected:
	String name;
	bool active;
	unsigned age;
	Rank rank;
	Specialization specialization;
	Medal medals[ALL_MEDALS];
	size_t medalsCount = 0;
public:
	const char* getName() const;
	const unsigned getAge() const;
	const Rank getRank() const;
	const Specialization getSpecialization() const;
	const Medal getMedal(const size_t) const;
	const size_t getMedalsCount() const;

	virtual Soldier* clone() const = 0;

	void soldierInfo() const;
	bool isActive() const;
	bool recieveMedal(const Medal);

	void rankDisplay() const;
private:
	void specializationDisplay() const;
	void medalsDisplay(const Medal) const;
};