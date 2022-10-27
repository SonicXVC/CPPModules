#include "Convert.hpp"
#include <limits.h>

Convert :: Convert(void) {}
Convert :: ~Convert(void) {}
Convert :: Convert(std :: string const &input) : input(input), type ("") {}
Convert :: Convert(const Convert & other) {
    *this = other;
}

std :: string const & Convert :: getInput(void) const {
    return input;
}

std :: string const & Convert :: getType(void) const {
    return type;
}

Convert & Convert :: operator=(const Convert & other) {
    if (this != &other) {
        type = other.getType();
        input = other.getInput();
    }
    return *this;
}

void	Convert :: checkType(void) {
    size_t i = 0;

    if (input[i] == '-')
        i++;
    for (; i < input.size() && input[i] >= '0' && input[i] <= '9'; i++);
    if (i == input.size()) {
        long tmp = std :: stol(input.c_str());
        if (tmp < INT_MAX && tmp > INT_MIN)
            type = "int";
    }
    else if (input[i] == '.' && i) {
        i++;
        for (; i < input.size() && input[i] >= '0' && input[i] <= '9'; i++);
        if (i == input.size() - 1 && input[i] == 'f')
            type = "float";
        if (i == input.size())
            type = "double";
    }
    else if ((input.size() == 1 && (input[i] < '0' || input[i] > '9'))
             || (input.size() == 3 && input[0] == '\'' && input[2] == '\''))
        type = "char";
    if (input == "nanf" || input == "-inff" || input == "+inff")
        type = "float";
    if (input == "nan" || input == "-inf" || input == "+inf")
        type = "double";
}

void	Convert :: printChar(void) const {
    std :: cout << "char: ";
    if (type == "char" && input.size() == 3)
        std :: cout << input << std :: endl;
    else if (type == "char" && input.size() == 1)
        std :: cout << "\'" << input << "\'" << std :: endl;
    else if (type == "int") {
        int code = std :: atoi(input.c_str());
        if (code < 32 || code > 127)
            std :: cout << "Non displayable" << std :: endl;
        else
            std :: cout << "\'" << static_cast<char>(code) << "\'" << std :: endl;
    }
    else if (type == "float" && (input == "nanf" || input == "-inff" || input == "+inff"))
        std :: cout << "impossible" << std :: endl;
    else if (type == "double" && (input == "nan" || input == "-inf" || input == "+inf"))
        std :: cout << "impossible" << std :: endl;
    else if (type == "float" || type == "double") {
        float code = std :: atof(input.c_str());
        if (static_cast<int>(code) < 32 || static_cast<int>(code) > 127)
            std :: cout << "Non displayable" << std :: endl;
        else
            std :: cout << "\'" << static_cast<char>(static_cast<int>(code)) << "\'" << std :: endl;
    }
}

void	Convert :: printInt(void) const {
    std :: cout << "int: ";
    if (type == "int") {
        int tmp = std :: atoi(input.c_str());
        std :: cout << tmp << std :: endl;
    }
    else if (type == "char")
        std :: cout << static_cast<int>(input[0]) << std :: endl;
    else if (type == "float" && (input == "nanf" || input == "-inff" || input == "+inff"))
        std :: cout << "impossible" << std :: endl;
    else if (type == "double" && (input == "nan" || input == "-inf" || input == "+inf"))
        std :: cout << "impossible" << std :: endl;
    else if (type == "double" || type == "float") {
        float tmp = std :: atof(input.c_str());
        std :: cout << static_cast<int>(tmp) << std :: endl;
    }

}

void	Convert :: printFloat(void) const {
    std :: cout << "float: ";
    if (type == "float" && (input == "nanf" || input == "-inff" || input == "+inff"))
        std :: cout << input << std :: endl;
    else if (type == "float")
        std :: cout << input << std :: endl;
    else if (type == "double")
        std :: cout << input << "f" << std :: endl;
    else if (type == "int") {
        int tmp = std :: atof(input.c_str());
        std :: cout << tmp << ".0f" << std :: endl;
    }
    else if (type == "char") {
        std :: cout << static_cast<int>(input[0]) << ".0f" << std :: endl;
    }
}

void	Convert :: printDouble(void) const {
    std :: cout << "double: ";
    if (type == "float")
        std :: cout << input.substr(0, input.size() - 1) << std :: endl;
    else if (type == "double")
        std :: cout << input << std :: endl;
    else if (type == "int") {
        int tmp = std :: atof(input.c_str());
        std :: cout << tmp << ".0" << std :: endl;
    }
    else if (type == "char") {
        std :: cout << static_cast<int>(input[0]) << ".0" << std :: endl;
    }
}

void	Convert :: print(void) const{
    printChar();
    printInt();
    printFloat();
    printDouble();
}

bool	Convert :: excep(void) {
    checkType();
    if (type == "")
        throw BadInput();
    return true;
}

const char* Convert :: BadInput :: what(void) const throw() {
    return "Bad input to convert";
}