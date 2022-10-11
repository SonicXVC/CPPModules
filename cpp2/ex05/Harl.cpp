#include "Harl.hpp"

Harl :: Harl() {
    _debug = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
    _info = "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    _warn = "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
    _err = "This is unacceptable! I want to speak to the manager now.";
}

Harl :: ~Harl(){}

void Harl :: debug(void) {
    std :: cout << _debug << std :: endl;
}

void Harl :: info(void) {
    std :: cout << _info << std :: endl;
}

void Harl :: warning(void) {
    std :: cout << _warn << std :: endl;
}

void Harl :: error(void) {
    std :: cout << _err << std :: endl;
}

void Harl :: complain(std :: string level) {
    std :: string complainLev[] = {"debug", "info", "warning", "error"};
    void (Harl :: *forComplain[])(void) = {
        &Harl :: debug,
        &Harl :: info,
        &Harl :: warning,
        &Harl :: error
    };
    int i = 0;
    for (; i < 4 && complainLev[i] != level; i++);
    switch (i)
    {
        case 4:
            std :: cout << "No such level" << std :: endl;
            break;
    
        default:
            (this->*forComplain[i])();
    }
}