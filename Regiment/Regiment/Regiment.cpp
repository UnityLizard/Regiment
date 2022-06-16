#include "Regiment.h"

#include "Private.h"
#include "Corporal.h"
#include "Sergeant.h"
#include "Lieutenant.h"
#include "Captain.h"
#include "Major.h"
#include "Colonel.h"
#include "General.h"

#include "Mortar.h"
#include "Anti_Tank.h"
#include "Jeep.h"
#include "Light_Tank.h"
#include "Heavy_Tank.h"

#include "AssaultRiffle.h"
#include "MachineGun.h"
#include "SniperRiffle.h"
#include "Pistol.h"

void Regiment::regimentStatus() const
{
	soldiersStatus();
	std::cout << std::endl;
	machineryStatus();
	std::cout << std::endl;
	weaponsStatus();
	std::cout << std::endl;
}

void Regiment::soldiersStatus() const
{
	for (size_t i = 0; i < soldiers.getSize(); i++)
	{
		std::cout << i << ". ";
		soldiers[i]->rankDisplay();
		std::cout << " " << soldiers[i]->getName() << std::endl;
	}
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
		if (machinery[i]->getType() == MachineryType::HeavyTank)
		{
			HTcount++;
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
		else if (machinery[i]->getType() == MachineryType::LightTank)
		{
			LTcount++;
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
			Jcount++;
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
		else if (machinery[i]->getType() == MachineryType::AntiTank)
		{
			ATcount++;
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
			Mcount++;
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

bool Regiment::addPrivate(const String& name, const unsigned age)
{
	if (name.c_str() == nullptr || age < 18 || age >= 80)
		return false;
	
	Private* temp = new Private(name, age);
	addSoldier(temp);
	temp = nullptr;

	return true;
}

bool Regiment::soldierInfo(const size_t index)
{
	if (index >= soldiers.getSize())
		return false;
	
	soldiers[index]->soldierInfo();
	return true;
}

bool Regiment::removeSoldier(size_t index)
{
	if (index >= soldiers.getSize())
		return false;

	Soldier* temp = soldiers.popAt(index);
	delete temp;
	
	return true;
}

bool Regiment::addMortar()
{
	Mortar* temp = new Mortar();
	addMachinery(temp);
	temp = nullptr;

	return true;
}

bool Regiment::addAntiTank()
{
	Anti_Tank* temp = new Anti_Tank();
	addMachinery(temp);
	temp = nullptr;

	return true;
}

bool Regiment::addJeep()
{
	Jeep* temp = new Jeep();
	addMachinery(temp);
	temp = nullptr;

	return true;
}

bool Regiment::addLightTank()
{
	Light_Tank* temp = new Light_Tank();
	addMachinery(temp);
	temp = nullptr;

	return true;
}

bool Regiment::addHeavyTank()
{
	Heavy_Tank* temp = new Heavy_Tank();
	addMachinery(temp);
	temp = nullptr;

	return true;
}

bool Regiment::fixMachinery()
{
	if (machinery.getSize() == 0)
		return false;
	
	for (size_t i = 0; i < machinery.getSize(); i++)
	{
		machinery[i]->fix();
	}

	return true;
}

bool Regiment::restockFuel()
{
	for (size_t i = 0; i < machinery.getSize(); i++)
	{
		if (machinery[i]->getType() == MachineryType::Jeep
			|| machinery[i]->getType() == MachineryType::LightTank
			|| machinery[i]->getType() == MachineryType::HeavyTank)
		{
			Vehicle::restockFuel();
		}
		return true;
	}

	return false;
}

bool Regiment::restockRounds(const MachineryType type)
{
	if (type == MachineryType::Jeep)
		return false;
	
	for (size_t i = 0; i < machinery.getSize(); i++)
	{
		if (machinery[i]->getType() == type)
		{
			switch (type)
			{
			case MachineryType::Mortar:
				Mortar::restockRounds();
				break;
			case MachineryType::AntiTank:
				Anti_Tank::restockRounds();
				break;
			case MachineryType::LightTank:
				Light_Tank::restockRounds();
				break;
			case MachineryType::HeavyTank:
				Heavy_Tank::restockRounds();
				break;
			default:
				break;
			}
		}
		return true;
	}

	return false;
}

bool Regiment::removeMachinery(size_t index)
{
	if (index >= machinery.getSize())
		return false;

	Machinery* temp = machinery.popAt(index);
	delete temp;

	return true;
}

bool Regiment::addAssaultRiffle()
{
	AssaultRiffle* temp = new AssaultRiffle();
	addWeapon(temp);
	temp = nullptr;

	return true;
}

bool Regiment::addMachineGun()
{
	MachineGun* temp = new MachineGun();
	addWeapon(temp);
	temp = nullptr;

	return true;
}

bool Regiment::addSniperRiffle()
{
	SniperRiffle* temp = new SniperRiffle();
	addWeapon(temp);
	temp = nullptr;

	return true;
}

bool Regiment::addPistol()
{
	Pistol* temp = new Pistol();
	addWeapon(temp);
	temp = nullptr;

	return true;
}

bool Regiment::fixWeapons()
{
	if (weapons.getSize() == 0)
		return false;

	for (size_t i = 0; i < weapons.getSize(); i++)
	{
		weapons[i]->fix();
	}

	return true;
}

bool Regiment::restockAmmo(const WeaponType type)
{
	for (size_t i = 0; i < weapons.getSize(); i++)
	{
		if (weapons[i]->getType() == type)
		{
			weapons[i]->restockAmmo();
		}
		return true;
	}

	return false;
}

bool Regiment::removeWeapon(size_t index)
{
	if (index >= weapons.getSize())
		return false;

	Weapons* temp = weapons.popAt(index);
	delete temp;

	return true;
}

bool Regiment::soldierRankFilter(const Rank rank)
{
	if (soldiers.getSize() == 0)
		return false;
	
	size_t counter = 0;

	for (size_t i = 0; i < soldiers.getSize(); i++)
		if (soldiers[i]->getRank() == rank)
		{
			std::cout << counter << ". ";
			soldiers[i]->rankDisplay();
			std::cout << " " << soldiers[i]->getName() << std::endl;
		}

	return true;
}

bool Regiment::discussTactics()
{
	if (soldiers.getSize() == 0)
		return false;

	size_t counter = 0;

	for (size_t i = 0; i < soldiers.getSize(); i++)
		if (soldiers[i]->getRank() >= Rank::Colonel)
		{
			if (counter)
				std::cout << ", ";
			soldiers[i]->rankDisplay();
			std::cout << " " << soldiers[i]->getName();
		}

	std::cout << " are discussing military tactics." << std::endl;

	return true;
}

bool Regiment::promoteSoldier(size_t index)
{
	if (index >= soldiers.getSize())
		return false;

	Soldier* currentSoldier = soldiers.popAt(index);
	Soldier* promotedSoldier = nullptr;

	switch (currentSoldier->getRank())
	{
	case Rank::Private:
		promotedSoldier = new Corporal(currentSoldier);
		break;
	case Rank::Corporal:
		break;
	case Rank::Sergeant:
		promotedSoldier = new Lieutenant(currentSoldier);
		break;
	case Rank::Lieutenant:
		promotedSoldier = new Captain(currentSoldier);
		break;
	case Rank::Captain:
		promotedSoldier = new Major(currentSoldier);
		break;
	case Rank::Major:
		promotedSoldier = new Colonel(currentSoldier);
		break;
	case Rank::Colonel:
		promotedSoldier = new General(currentSoldier);
		break;
	case Rank::General:
		break;
	default:
		break;
	}

	if (promotedSoldier == nullptr)
	{
		soldiers.pushAt(currentSoldier, index);

		return false;
	}

	delete currentSoldier;
	soldiers.pushAt(promotedSoldier, index);

	return true;
}

bool Regiment::promoteSoldier(const size_t index, const Specialization spec)
{
	if (index >= soldiers.getSize())
		return false;

	if (soldiers[index]->getRank() != Rank::Colonel)
		return false;

	Soldier* currentSoldier = soldiers.popAt(index);
	Soldier* promotedSoldier = new Sergeant(currentSoldier, spec);

	delete currentSoldier;
	soldiers.pushAt(promotedSoldier, index);

	return true;
}

bool Regiment::awardSoldier(const size_t index, const Medal medal)
{
	if (index >= soldiers.getSize())
		return false;
	
	soldiers[index]->recieveMedal(medal);

	return true;
}

bool Regiment::militaryTraning()
{
	return false;
}

void Regiment::addSoldier(Soldier* obj)
{
	soldiers.pushBack(obj);
}

void Regiment::addMachinery(Machinery* obj)
{
	machinery.pushBack(obj);
}

void Regiment::addWeapon(Weapons* obj)
{
	weapons.pushBack(obj);
}
