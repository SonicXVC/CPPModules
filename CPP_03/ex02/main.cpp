#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
    ScavTrap scav("Scav");
    ScavTrap anotherScav;
    ClapTrap clap("Clap");
    FragTrap frag("Frag");

    scav.guardGate();
    scav.attack("Clap");
    scav.takeDamage(25);
    scav.beRepaired(3);
    anotherScav = scav;
    anotherScav.takeDamage(30);
    anotherScav.beRepaired(5);

    std :: cout << "------------------------------------------" << std ::endl;

    clap.attack("enemy");
    clap.takeDamage(9);
    clap.beRepaired(1);
    clap.takeDamage(1);
    clap.beRepaired(2);

    std :: cout << "------------------------------------------" << std ::endl;

    frag.attack("enemy");
    frag.takeDamage(9);
    frag.beRepaired(1);
    frag.takeDamage(1);
    frag.beRepaired(2);
    return 0;
}