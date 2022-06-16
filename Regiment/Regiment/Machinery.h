#pragma once
#include<iostream>
const unsigned ROUNDS_PREPARED = 20;
enum Condition{Perfect,Poor,Good};
class Machinery
{
protected:
	Condition condition;
	unsigned crewSize;
	unsigned weight;

public:
	unsigned getcrewSize() const; 
	Condition getCondition() const;
	unsigned getWeight() const;
	void fix();
	virtual Machinery* clone() const = 0;
};
