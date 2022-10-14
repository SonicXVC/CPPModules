#include "ScavTrap.hpp"

int	main(void) {
        ScavTrap scav("Scav");
        ScavTrap anotherScav;
        ClapTrap clap("Clap");

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
    return 0;
}