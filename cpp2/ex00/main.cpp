#include "Zombie.hpp"

int main(void) {
    Zombie  *Bruv1, *Bruv2;

    Bruv1 = newZombie("Bruv1");
    Bruv1->announce();
    delete Bruv1;
    Bruv2 = newZombie("Bruv2");
    Bruv2->announce();
    delete Bruv2;
}