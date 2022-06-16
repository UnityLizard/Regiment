#pragma once

#include "Vector.hpp"
#include "Soldier.h"
#include "Machinery.h"
#include "Weapons.h"

class Regiment
{
	Vector<Soldier*> soldiers;
	Vector<Machinery*> machinery;
	Vector<Weapons*> weapons;
public:
	void regimentStatus() const;
	void soldiersStatus() const;
	void machineryStatus() const;
	void weaponsStatus() const;
	bool addPrivate(const String&, const unsigned);
	bool soldierInfo(const size_t);
	bool promoteSoldier(const size_t);
	bool awardSoldier(const size_t, const Medal);
	bool removeSoldier(const size_t);
	bool addMortar();
	bool addAntiTank();
	bool addJeep();
	bool addLightTank();
	bool addHeavyTank();
	bool fixMachinery();
	bool restockFuel();
	bool restockRounds(const MachineryType);
	bool removeMachinery(const size_t);
	bool addAssaultRiffle();
	bool addMachineGun();
	bool addSniperRiffle();
	bool addPistol();
	bool fixWeapons();
	bool restockAmmo(const WeaponType);
	bool removeWeapon(const size_t);
	
	bool soldierRankFilter(const Rank);
	bool discussTactics();
	bool militaryTraning();
private:
	void addSoldier(Soldier*);
	void addMachinery(Machinery*);
	void addWeapon(Weapons*);
};
