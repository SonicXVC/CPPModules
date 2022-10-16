#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
    Animal	*animals[10];
    Brain	*brain;
    // Animal hi;

    for (int i = 0 ; i < 10; i++) {
        i < 5 ? animals[i] = new Dog() : animals[i] = new Cat();
        std :: cout << "Number " << i + 1 << " is " <<  animals[i]->getType() << std :: endl;
    }
    std :: cout << "No. 1 is " << animals[0]->getType() << ". It\'s sound is ";
    animals[0]->makeSound();
    std :: cout << "No. 6 is " << animals[5]->getType() << ". It\'s sound is ";
    animals[5]->makeSound();
    brain = animals[5]->getBrain();
    brain->ideas[0] = "Sleeep...";
    brain->ideas[1] = "Eeeeeaaat...";
    brain->ideas[2] = "Pllaaaaayyyy...";
    brain->ideas[3] = "Hmmm..... I got to drop it";
    brain->ideas[4] = "Pooooooppppp";
    std :: cout << "Ideas to share: " << std :: endl;
    for (int i = 0; i < 5; i++)
        std :: cout << brain->ideas[i] << std :: endl;
    std :: cout << "No. 6 is thinking about " << animals[5]->getBrain()->ideas[0] << std :: endl;
    *animals[8] = *animals[5];
    std :: cout << "No. 9 is thinking about " << animals[8]->getBrain()->ideas[1] << std :: endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];
    return 0;
}