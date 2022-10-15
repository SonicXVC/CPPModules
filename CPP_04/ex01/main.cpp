#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void) {
    Animal	*animals[10];
    Brain	*brain;

    for (int i = 0 ; i < 10; i++) {
        i < 5 ? animals[i] = new Dog() : animals[i] = new Cat();
        std :: cout << "Number " << i + 1 << " is " <<  animals[i]->getType() << std :: endl;
    }
    brain = dynamic_cast<Dog *>(animals[0])->getBrain();
    brain->ideas[0] = "Sleeep...";
    brain->ideas[1] = "Eeeeeaaat...";
    brain->ideas[2] = "Pllaaaaayyyy...";
    brain->ideas[3] = "Hmmm..... I got to drop it";
    brain->ideas[4] = "Pooooooppppp";
    std :: cout << "Ideas to share: " << std :: endl;
    for (int i = 0; i < 5; i++)
        std :: cout << brain->ideas[i] << std :: endl;
    std :: cout << "Idea of No.1 is to " << dynamic_cast<Dog *>(animals[0])->getBrain()->ideas[1] << std :: endl;
    *dynamic_cast<Dog *>(animals[4]) = *dynamic_cast<Dog *>(animals[0]);
    std :: cout << "Idea of No.5 is to " << dynamic_cast<Dog *>(animals[4])->getBrain()->ideas[3] << std :: endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];
    return 0;
}