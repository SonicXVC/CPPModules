#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	{
    	Weapon  club = Weapon("two-handed Sword");
    	HumanA bob("Bob", club);
    	bob.attack();
    	club.setType("double-edged AX");
    	bob.attack();
        std :: cout << "-------------------------------------------------------" << std :: endl;
	}
	{
		Weapon  *club = new Weapon("Jedi's lightsaber");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club->setType("StormTrooper's blaster");
		jim.attack();
		delete club;
        std :: cout << "-------------------------------------------------------" << std :: endl;
	}
	{
	    HumanB kim("Kim");
	    kim.attack();
        std :: cout << "-------------------------------------------------------" << std :: endl;
	}
    return 0; 
}