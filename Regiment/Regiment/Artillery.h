#pragma once

#include"Machinery.h"

class Artillery : public Machinery
{
public:
	virtual void restockRounds() const = 0;
};