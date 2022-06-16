#include "Soldier.h"

const char* Soldier::getName() const
{
    return name.c_str();
}

const unsigned Soldier::getAge() const
{
    return age;
}

const Rank Soldier::getRank() const
{
    return rank;
}

const Specialization Soldier::getSpecialization() const
{
    return specialization;
}

const Medal Soldier::getMedal(const size_t index) const
{
    return medals[index];
}

const size_t Soldier::getMedalsCount() const
{
    return medalsCount;
}

void Soldier::soldierInfo() const
{
    std::cout << "Name: ";
    rankDisplay();
    std::cout << " " << name << std::endl;
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

bool Soldier::recieveMedal(const Medal medal)
{
    for (size_t i = 0; i < medalsCount; i++)
        if (medal == medals[i])
            return false;
    
    medals[medalsCount++] = medal;
    return true;
}

void Soldier::rankDisplay() const
{
    switch (rank)
    {
    case Rank::Private:
        std::cout << "PVT";
        break;
    case Rank::Corporal:
        std::cout << "CPL";
        break;
    case Rank::Sergeant:
        std::cout << "SGT";
        break;
    case Rank::Lieutenant:
        std::cout << "LT";
        break;
    case Rank::Captain:
        std::cout << "CPT";
        break;
    case Rank::Major:
        std::cout << "MAJ";
        break;
    case Rank::Colonel:
        std::cout << "COL";
        break;
    case Rank::General:
        std::cout << "GEN";
        break;
    default:
        break;
    }
}

void Soldier::specializationDisplay() const
{
    switch (specialization)
    {
    case Specialization::Assault:
        std::cout << "Assault";
        break;
    case Specialization::Medic:
        std::cout << "Medic";
        break;
    case Specialization::Sharpshooter:
        std::cout << "Sharpshooter";
        break;
    case Specialization::Gunner:
        std::cout << "Gunner";
        break;
    case Specialization::Engineer:
        std::cout << "Engineer";
        break;
    case Specialization::Radio_operator:
        std::cout << "Radio operator";
        break;
    case Specialization::Tank_crewman:
        std::cout << "Tank crewman";
        break;
    default:
        break;
    }
}

void Soldier::medalsDisplay(Medal medal) const
{
    switch (medal)
    {
    case Medal::Medal_of_Honor:
        std::cout << "Medal of Honor";
        break;
    case Medal::Distinguished_Service_Medal:
        std::cout << "Distinguished Service Medal";
        break;
    case Medal::Purple_Heart:
        std::cout << "Purple Heart";
        break;
    case Medal::Prisoner_of_War_Medal:
        std::cout << "Prisoner of War Medal";
        break;
    case Medal::Good_Conduct_Medal:
        std::cout << "Good Conduct Medal";
        break;
    case Medal::Army_Commendation_Medal:
        std::cout << "Army Commendation Medal";
        break;
    default:
        break;
    }
}
