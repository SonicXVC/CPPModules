#include <iostream>

int main() {
    std :: string brain = "HI THIS IS BRAIN";
    std :: string *brainPTR = &brain;
    std :: string &brainREF = brain;

    std :: cout << "ORIG:" << brain << std :: endl;
    std :: cout << "PTR:" << *brainPTR << std :: endl;
    std :: cout << "REF:" << brainREF << std :: endl;
    std :: cout << "ORIG:" << &brain << std :: endl;
    std :: cout << "PTR:" << brainPTR << std :: endl;
    std :: cout << "REF:" << &brainREF << std :: endl;
    return 0;
}