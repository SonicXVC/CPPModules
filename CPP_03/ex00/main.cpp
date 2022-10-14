#include "ClapTrap.hpp"

int main() {
    // ClapTrap    first("First", 5);
    // ClapTrap    second("Second", 10);
    ClapTrap    first("First");
    ClapTrap    second("Second");
    ClapTrap    third;

    first.attack("Second");
    second.takeDamage(5);
    second.attack("First");
    first.takeDamage(10);
    third.attack("Second");
    std :: cout << second.getName() << " " <<  second.getHP() << " hp left\n";
    second.beRepaired(10);

    return(0);
}