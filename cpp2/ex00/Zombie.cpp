#include "Zombie.hpp"

Zombie :: Zombie(std :: string name)  {
    this->name = name;
}

Zombie :: ~Zombie() {
    std :: cout << "------------------------------------------------------------------------\n";
    std :: cout << "Maaaaaan, im dead" << std :: endl;
}

void    Zombie :: announce(void) const {
    std :: cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}