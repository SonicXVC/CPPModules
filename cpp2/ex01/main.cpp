#include "Zombie.hpp" 

int main(void) {
	Zombie	*zombs = zombieHorde(10, "One of clone ");

	for (int i = 0; i < 10; i++)
		zombs[i].announce();
	delete [] zombs;
    return 0;
}