#pragma once
#include"Machinery.h"
class Artillery :public Machinery
{
public:
	virtual unsigned restockRounds();
	Machinery* clone() const override;
};