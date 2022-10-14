#include "ClapTrap.hpp"

int main() {
    ClapTrap    first("First", 5);
    ClapTrap    second("Second", 10);
    ClapTrap    third;

    first.attack("second");
    second.takeDamage(5);
    second.attack("first");
    first.takeDamage(10);
    third.attack("second");
    std :: cout << second.getName() << " " <<  second.getHP() << " hp left\n";
    second.beRepaired(10);

    return(0);
}