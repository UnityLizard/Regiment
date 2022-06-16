#pragma once

#include "Machinery.h"

class Artillery : public Machinery
{
protected:
	float weight;
public:
	const float getWeight() const;
};