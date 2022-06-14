#include "Regiment.h"

#include "Private.h"
#include "Corporal.h"
#include "Sergeant.h"
#include "Lieutenant.h"
#include "Captain.h"
#include "Major.h"
#include "Colonel.h"
#include "General.h"

void Regiment::regimentStatus() const
{
	
}

void Regiment::soldiersStatus() const
{

}

void Regiment::machineryStatus() const
{
}

void Regiment::weaponsStatus() const
{
}

void Regiment::addSoldier(Soldier*)
{
}

//void Regiment::addMachinery(Machinery*)
//{
//}
//
//void Regiment::addWeapont(Weapon*)
//{
//}

bool Regiment::removeSoldier(size_t)
{
	return false;
}

bool Regiment::removeMachinery(size_t)
{
	return false;
}

bool Regiment::removeWeapon(size_t)
{
	return false;
}

bool Regiment::promoteSoldier(size_t)
{
	return false;
}

bool Regiment::awardSoldier(size_t, Specializations)
{
	return false;
}

void Regiment::fixMachinery()
{
}

void Regiment::fixWeapons()
{
}

bool Regiment::restockFuel(size_t, unsigned)
{
	return false;
}

bool Regiment::restockRounds(size_t, unsigned)
{
	return false;
}

bool Regiment::restockAmmo(size_t, unsigned)
{
	return false;
}

void Regiment::militaryTraning()
{
}
