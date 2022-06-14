#pragma once
#include "Condition.h"
#include<iostream>

class Machinery
{
protected:
	Condition condition;
	unsigned crewSize;
	unsigned weight;

public:
	Machinery(Condition Perfect, int x, int y);
	
	unsigned getcrewSize() const; 
	Condition getCondition() const;
	unsigned getWeight() const;
	void fix();
	virtual Machinery* clone() const = 0;
};
