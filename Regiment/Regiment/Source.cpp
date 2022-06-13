#include <iostream>

#include "Private.h"
#include "Corporal.h"
#include "Sergeant.h"
#include "Lieutenant.h"


int main()
{
	Private sol1("Gosho", 22);
	Private sol2("Ivo", 19);
	sol1.recieveMedal(Medals::Distinguished_Service_Medal);
	sol2.recieveMedal(Medals::Medal_of_Honor);
	sol1.soldierInfo();
	std::cout << std::endl;
	Sergeant sol(&sol2, Specializations::Medic);
	sol.soldierInfo();
	std::cout << std::endl;
	sol.command(&sol1);
	Lieutenant solt(&sol1);

	solt.command(&sol);
	sol.command(&solt);
	Lieutenant gosho(&sol);
	solt.command(&gosho);

	std::cout << std::endl;
	gosho.soldierInfo();
}