#pragma once
#include"Vehicle.h"
class Tank :public Vehicle
{
	virtual unsigned restockRounds() const ;
	Machinery* clone() const override;
};