#pragma once

#include "Vector.hpp"
#include "Soldier.h"
//#include "Machinery.h"
#include "Weapons.h"

class Regiment
{
	Vector<Soldier*> soldiers;
	//Vector<Machinery*> machinery;
	Vector<Weapons*> weapons;
public:
	void regimentStatus() const;
	void soldiersStatus() const;
	void machineryStatus() const;
	void weaponsStatus() const;
	void addSoldier(Soldier*);
	//void addMachinery(Machinery*);
	void addWeapon(Weapons*);
	bool removeSoldier(size_t);
	bool removeMachinery(size_t);
	bool removeWeapon(size_t);
	bool promoteSoldier(size_t);
	bool awardSoldier(size_t, Specializations);
	void fixMachinery();
	void fixWeapons();
	bool restockFuel(size_t, unsigned);
	bool restockRounds(size_t, unsigned);
	bool restockAmmo(size_t, unsigned);
	void militaryTraning();
};
