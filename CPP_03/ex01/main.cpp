#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // ClapTrap    first("First", 5);
    // ClapTrap    second("Second", 10);
    ClapTrap    first("First");
    ScavTrap    second("Second");

    first.attack("Second");
    second.takeDamage(5);
    second.attack("First");
    first.takeDamage(10);
    std :: cout << second.getName() << " " <<  second.getHP() << " hp left\n";
    second.beRepaired(10);

    return(0);
}