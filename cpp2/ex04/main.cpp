#include <fstream>
#include <iostream>

static std :: string replacing(std :: string str, std :: string s1, std :: string s2) {
    size_t i;
    for (i = 0; i < str.size(); i++) {
        if (!str.compare(i, s1.size(), s1)) {
            str.erase(i, s1.size());
            str.insert(i, s2);
        }
    }
    return (str);
}

static void _open(std :: string filename, std :: string s1, std :: string s2) {
    std :: ifstream infile;
    std :: ofstream outfile;
    std :: string   fileout_name, str;

    infile.open(filename);
    if (!infile.is_open()) {
        std :: cerr << "Cannot open the infile" << std :: endl;
        return ;
    }
    fileout_name = filename + ".replace";
    outfile.open(fileout_name, std :: fstream :: trunc);
    if (!outfile.is_open()) {
        std :: cerr << "Cannot open the outfile" << std :: endl;
        return ;
    }
    while (!infile.eof()) {
        std :: getline(infile, str);
        outfile << replacing(str, s1, s2) << std :: endl;
    }
    infile.close();
    outfile.close();
}

int main(void) {
    std ::string filename, s1, s2;

    std :: cout << "File: " << std :: endl;
    std :: getline(std :: cin, filename);
    std :: cout << "s1: " << std :: endl;
    std :: getline(std :: cin, s1);
    std :: cout << "s2: " << std :: endl;
    std :: getline(std :: cin, s2);

    if (filename == "" || s1 == "" || s2 == "") {
        std :: cerr << "Wrong input" << std :: endl;
        return 1;
    }
    _open(filename, s1, s2);
    
}