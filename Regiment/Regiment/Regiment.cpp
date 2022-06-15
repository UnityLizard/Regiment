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
	//fixes must be made on Machinery classes
}

void Regiment::weaponsStatus() const
{
	unsigned ARcount = 0;
	unsigned ARpoor, ARgood, ARperfect = 0;
	unsigned MGcount = 0;
	unsigned MGpoor, MGgood, MGperfect = 0;
	unsigned Pcount = 0;
	unsigned Ppoor, Pgood, Pperfect = 0;
	unsigned SRcount = 0;
	unsigned SRpoor, SRgood, SRperfect = 0;

	for (size_t i = 0; i < weapons.getSize(); i++)
	{
		if (weapons[i]->getType() == 1)
		{
			ARcount++;
			if (weapons[i]->getCondition() == 1)
			{
				ARperfect++;
			}
			else if (weapons[i]->getCondition() == 2)
			{
				ARgood++;
			}
			else if (weapons[i]->getCondition() == 3)
			{
				ARpoor++;
			}
		}
		else if (weapons[i]->getType() == 2)
		{
			MGcount++;
			if (weapons[i]->getCondition() == 1)
			{
				MGperfect++;
			}
			else if (weapons[i]->getCondition() == 2)
			{
				MGgood++;
			}
			else if (weapons[i]->getCondition() == 3)
			{
				MGpoor++;
			}
		}
		else if (weapons[i]->getType() == 3)
		{
			Pcount++;
			if (weapons[i]->getCondition() == 1)
			{
				Pperfect++;
			}
			else if (weapons[i]->getCondition() == 2)
			{
				Pgood++;
			}
			else if (weapons[i]->getCondition() == 3)
			{
				Ppoor++;
			}
		}
		else if (weapons[i]->getType() == 4)
		{
			SRcount++;
			if (weapons[i]->getCondition() == 1)
			{
				SRperfect++;
			}
			else if (weapons[i]->getCondition() == 2)
			{
				SRgood++;
			}
			else if (weapons[i]->getCondition() == 3)
			{
				SRpoor++;
			}
		}
	}
	std::cout << "Weapons status: " << std::endl;
	std::cout << "Assault riffles: " << ARcount << std::endl;
	std::cout << "AR conditions: " << std::endl;
	std::cout << "Perfect- " << ARperfect << std::endl << "Good- " << ARgood << std::endl;
	std::cout << "Poor- " << ARpoor << std::endl << std::endl;

	std::cout << "Machine Guns: " << MGcount << std::endl;
	std::cout << "MG conditions: " << std::endl;
	std::cout << "Perfect- " << MGperfect << std::endl << "Good- " << MGgood << std::endl;
	std::cout << "Poor- " << MGpoor << std::endl << std::endl;

	std::cout << "Pistols: " << Pcount << std::endl;
	std::cout << "P conditions: " << std::endl;
	std::cout << "Perfect- " << Pperfect << std::endl << "Good- " << Pgood << std::endl;
	std::cout << "Poor- " << Ppoor << std::endl << std::endl;

	std::cout << "Sniper riffles: " << SRcount << std::endl;
	std::cout << "SR conditions: " << std::endl;
	std::cout << "Perfect- " << SRperfect << std::endl << "Good- " << SRgood << std::endl;
	std::cout << "Poor- " << SRpoor << std::endl << std::endl;

}

void Regiment::addSoldier(Soldier*)
{
}

oid Regiment::addMachinery(Machinery* obj)
{
	machinery.pushBack(obj);
}

void Regiment::addWeapon(Weapons* obj)
{
	weapons.pushBack(obj);

}

bool Regiment::removeSoldier(size_t)
{
	return false;
}

bool Regiment::removeMachinery(size_t index)
{
	bool doesExist = 0;
	for (size_t i = 0; i < weapons.getSize(); i++)
	{
		if (i == index)
		{
			doesExist = 1;
			break;
		}
	}

	if (!doesExist)
	{
		throw "This machinery does not exist!";
		return false;
	}
	machinery.popAt(index);
}

bool Regiment::removeWeapon(size_t index)
{
	bool doesExist = 0;
	for (size_t i = 0; i < weapons.getSize(); i++)
	{
		if (i == index)
		{
			doesExist = 1;
			break;
		}
	}

	if (!doesExist)
	{
		throw "This weapon does not exist!";
		return false;
	}

	weapons.popAt(index);
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
	for (size_t i = 0; i < machinery.getSize(); i++)
	{
		machinery[i]->fix();
	}
}

void Regiment::fixWeapons()
{
	for (size_t i = 0; i < weapons.getSize(); i++)
	{
		weapons[i]->fix();
	}
}

bool Regiment::restockFuel(size_t, unsigned)
{
	return false;
}

bool Regiment::restockRounds(size_t, unsigned)
{
	return false;
}

void Regiment::restockAmmoAR()
{
	for (size_t i = 0; i < weapons.getSize(); i++)
	{
		if (weapons[i]->getType() == 1)
		{
			weapons[i]->restockAmmo();
		}
		break;
	}
}

void Regiment::restockAmmoMG()
{
	for (size_t i = 0; i < weapons.getSize(); i++)
	{
		if (weapons[i]->getType() == 2)
		{
			weapons[i]->restockAmmo();
		}
		break;
	}
}

void Regiment::restockAmmoP()
{
	for (size_t i = 0; i < weapons.getSize(); i++)
	{
		if (weapons[i]->getType() == 3)
		{
			weapons[i]->restockAmmo();
		}
		break;
	}
}

void Regiment::restockAmmoSR()
{
	for (size_t i = 0; i < weapons.getSize(); i++)
	{
		if (weapons[i]->getType() == 4)
		{
			weapons[i]->restockAmmo();
		}
		break;
	}
}

void Regiment::militaryTraning()
{
}

const Vector<Weapons*>& Regiment::getWeapons() const
{
	return weapons;
}

const Vector<Machinery*>& Regiment::getMachinery() const
{
	return machinery;
}
