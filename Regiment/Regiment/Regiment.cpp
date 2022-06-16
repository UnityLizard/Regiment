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
	/* 
	HT- Heavy tank
	LT- Light tank
	J- Jeep
	AT- Anti tank
	M- Mortar
	*/  
	unsigned HTcount = 0;
	unsigned HTpoor = 0, HTgood = 0, HTperfect = 0;
	unsigned LTcount = 0;
	unsigned LTpoor = 0, LTgood = 0, LTperfect = 0;
	unsigned Jcount = 0;
	unsigned Jpoor = 0, Jgood = 0, Jperfect = 0;
	unsigned ATcount = 0;
	unsigned ATpoor = 0, ATgood = 0, ATperfect = 0;
	unsigned Mcount = 0;
	unsigned Mpoor = 0, Mgood = 0, Mperfect = 0;

	for (size_t i = 0; i < machinery.getSize(); i++)
	{
		if (machinery[i]->getType() == MachineryType::Heavy_Tank)
		{
			ARcount++;
			if (machinery[i]->getCondition() == Condition::Perfect)
			{
				HTperfect++;
			}
			else if (machinery[i]->getCondition() == Condition::Good)
			{
				HTgood++;
			}
			else if (machinery[i]->getCondition() == Condition::Poor)
			{
				HTpoor++;
			}
		}
		else if (machinery[i]->getType() == MachineryType::Light_Tank)
		{
			MGcount++;
			if (machinery[i]->getCondition() == Condition::Perfect)
			{
				LTperfect++;
			}
			else if (machinery[i]->getCondition() == Condition::Good)
			{
				LTgood++;
			}
			else if (machinery[i]->getCondition() == Condition::Poor)
			{
				LTpoor++;
			}
		}
		else if (machinery[i]->getType() == MachineryType::Jeep)
		{
			MGcount++;
			if (machinery[i]->getCondition() == Condition::Perfect)
			{
				Jperfect++;
			}
			else if (machinery[i]->getCondition() == Condition::Good)
			{
				Jgood++;
			}
			else if (machinery[i]->getCondition() == Condition::Poor)
			{
				Jpoor++;
			}
		}
		else if (machinery[i]->getType() == MachineryType::Anti_Tank)
		{
			MGcount++;
			if (machinery[i]->getCondition() == Condition::Perfect)
			{
				ATperfect++;
			}
			else if (machinery[i]->getCondition() == Condition::Good)
			{
				ATgood++;
			}
			else if (machinery[i]->getCondition() == Condition::Poor)
			{
				ATpoor++;
			}
		}
		else if (machinery[i]->getType() == MachineryType::Mortar)
		{
			MGcount++;
			if (machinery[i]->getCondition() == Condition::Perfect)
			{
				Mperfect++;
			}
			else if (machinery[i]->getCondition() == Condition::Good)
			{
				Mgood++;
			}
			else if (machinery[i]->getCondition() == Condition::Poor)
			{
				Mpoor++;
			}
		}
	}
	std::cout << "Machinery status: " << std::endl;
	std::cout << "Heavy Tanks: " << HTcount << std::endl;
	std::cout << "HT conditions: " << std::endl;
	std::cout << "Perfect- " << HTperfect << std::endl << "Good- " << HTgood << std::endl;
	std::cout << "Poor- " << HTpoor << std::endl << std::endl;

	std::cout << "Light Tanks: " << LTcount << std::endl;
	std::cout << "LT conditions: " << std::endl;
	std::cout << "Perfect- " << LTperfect << std::endl << "Good- " << LTgood << std::endl;
	std::cout << "Poor- " << LTpoor << std::endl << std::endl;

	std::cout << "Jeeps: " << Jcount << std::endl;
	std::cout << "Jeep conditions: " << std::endl;
	std::cout << "Perfect- " << Jperfect << std::endl << "Good- " << Jgood << std::endl;
	std::cout << "Poor- " << Jpoor << std::endl << std::endl;

	std::cout << "Anti Tanks: " << ATcount << std::endl;
	std::cout << "AT conditions: " << std::endl;
	std::cout << "Perfect- " << ATperfect << std::endl << "Good- " << ATgood << std::endl;
	std::cout << "Poor- " << ATpoor << std::endl << std::endl;

	std::cout << "Mortars: " << Mcount << std::endl;
	std::cout << "Mortar conditions: " << std::endl;
	std::cout << "Perfect- " << Mperfect << std::endl << "Good- " << Mgood << std::endl;
	std::cout << "Poor- " << Mpoor << std::endl << std::endl;
}

void Regiment::weaponsStatus() const
{
	/* 
	AR- Assault Riffle
	MG- Machine Gun
	P- Pistol
	SR- Sniper Riffle
	*/  
	unsigned ARcount = 0;
	unsigned ARpoor = 0, ARgood = 0, ARperfect = 0;
	unsigned MGcount = 0;
	unsigned MGpoor = 0, MGgood = 0, MGperfect = 0;
	unsigned Pcount = 0;
	unsigned Ppoor = 0, Pgood = 0, Pperfect = 0;
	unsigned SRcount = 0;
	unsigned SRpoor = 0, SRgood = 0, SRperfect = 0;

	for (size_t i = 0; i < weapons.getSize(); i++)
	{
		if (weapons[i]->getType() == WeaponType::AssaultRiffle)
		{
			ARcount++;
			if (weapons[i]->getCondition() == Condition::Perfect)
			{
				ARperfect++;
			}
			else if (weapons[i]->getCondition() == Condition::Good)
			{
				ARgood++;
			}
			else if (weapons[i]->getCondition() == Condition::Poor)
			{
				ARpoor++;
			}
		}
		else if (weapons[i]->getType() == WeaponType::MachineGun)
		{
			MGcount++;
			if (weapons[i]->getCondition() == Condition::Perfect)
			{
				MGperfect++;
			}
			else if (weapons[i]->getCondition() == Condition::Good)
			{
				MGgood++;
			}
			else if (weapons[i]->getCondition() == Condition::Poor)
			{
				MGpoor++;
			}
		}
		else if (weapons[i]->getType() == WeaponType::Pistol)
		{
			Pcount++;
			if (weapons[i]->getCondition() == Condition::Perfect)
			{
				Pperfect++;
			}
			else if (weapons[i]->getCondition() == Condition::Good)
			{
				Pgood++;
			}
			else if (weapons[i]->getCondition() == Condition::Poor)
			{
				Ppoor++;
			}
		}
		else if (weapons[i]->getType() == WeaponType::SniperRiffle)
		{
			SRcount++;
			if (weapons[i]->getCondition() == Condition::Perfect)
			{
				SRperfect++;
			}
			else if (weapons[i]->getCondition() == Condition::Good)
			{
				SRgood++;
			}
			else if (weapons[i]->getCondition() == Condition::Poor)
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
	std::cout << "Pistol conditions: " << std::endl;
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

void Regiment::addMachinery(Machinery* obj)
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

void Regiment::restockFuel()
{
	for (size_t i = 0; i < machinery.getSize(); i++)
	{
		if (machinery[i]->getType() == MachineryType::Vehicle)
		{
			machinery[i]->restockFuel();
		}
		break;
	}
}

void Regiment::restockRounds()
{
	for (size_t i = 0; i < machinery.getSize(); i++)
	{
		if (machinery[i]->getType() == MachineryType::Artillery)
		{
			machinery[i]->restockRounds();
		}
		break;
	}
}

void Regiment::restockAmmoAR()
{
	for (size_t i = 0; i < weapons.getSize(); i++)
	{
		if (weapons[i]->getType() == WeaponType::AssaultRiffle)
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
		if (weapons[i]->getType() == WeaponType::MachineGun)
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
		if (weapons[i]->getType() == WeaponType::Pistol)
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
		if (weapons[i]->getType() == WeaponType::SniperRiffle)
		{
			weapons[i]->restockAmmo();
		}
		break;
	}
}

void Regiment::militaryTraning()
{
}
