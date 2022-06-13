#include "Soldier.h"

String Soldier::getName() const
{
    return name;
}

unsigned Soldier::getAge() const
{
    return age;
}

Specializations Soldier::getSpecialization() const
{
    return specialization;
}

Medals Soldier::getMedal(const size_t index) const
{
    return medals[index];
}

size_t Soldier::getMedalsCount() const
{
    return medalsCount;
}

void Soldier::soldierInfo() const
{
    std::cout << "Name: " << getRank() << " " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Status: " << (active ? "active" : "inative") << std::endl;
    std::cout << "Specialization: ";
    specializationDisplay();
    std::cout << std::endl;
    std::cout << "Medals: ";
    for (size_t i = 0; i < medalsCount; i++)
    {
        if (i != 0)
            std::cout << ", ";
        medalsDisplay(medals[i]);
    }
    if (medalsCount == 0)
        std::cout << "none";
    std::cout << std::endl;
}

bool Soldier::isActive() const
{
    return active;
}

bool Soldier::recieveMedal(const Medals medal)
{
    for (size_t i = 0; i < medalsCount; i++)
        if (medal == medals[i])
            return false;
    
    medals[medalsCount++] = medal;
    return true;
}

void Soldier::specializationDisplay() const
{
    switch (specialization)
    {
    case Specializations::Assault:
        std::cout << "Assault";
        break;
    case Specializations::Medic:
        std::cout << "Medic";
        break;
    case Specializations::Sharpshooter:
        std::cout << "Sharpshooter";
        break;
    case Specializations::Gunner:
        std::cout << "Gunner";
        break;
    case Specializations::Engineer:
        std::cout << "Engineer";
        break;
    case Specializations::Radio_operator:
        std::cout << "Radio operator";
        break;
    case Specializations::Tank_crewman:
        std::cout << "Tank crewman";
        break;
    default:
        break;
    }
}

void Soldier::medalsDisplay(Medals medal) const
{
    switch (medal)
    {
    case Medals::Medal_of_Honor:
        std::cout << "Medal of Honor";
        break;
    case Medals::Distinguished_Service_Medal:
        std::cout << "Distinguished Service Medal";
        break;
    case Medals::Purple_Heart:
        std::cout << "Purple Heart";
        break;
    case Medals::Prisoner_of_War_Medal:
        std::cout << "Prisoner of War Medal";
        break;
    case Medals::Good_Conduct_Medal:
        std::cout << "Good Conduct Medal";
        break;
    case Medals::Army_Commendation_Medal:
        std::cout << "Army Commendation Medal";
        break;
    default:
        break;
    }
}
