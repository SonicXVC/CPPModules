#include "iter.hpp"
#include <iostream>
#include <string>

class Awesome {
		public:
			Awesome(void) : _n(42) {}
			int get(void) const {return this->_n; }
		private:
			int _n;
};

std :: ostream & operator<<(std :: ostream & o, const Awesome & rhs) {o << rhs.get(); return o; }

template <typename T>
void print(T const & x) {std :: cout << x << std :: endl; return ;}

int main(void) {
	{
		int tab[] = {0, 1, 2, 3, 4};
		Awesome tab2[5];
	
		iter(tab, 5, print);
		iter(tab2, 5, print);
	}
	{
		float tab[] = {3.5, 1.5, 2.0, 3.789, 4.21};
		char tab1[] = "hello";
		std :: string tab2[] = {"hello", "world", "and", "you", "!"};
		std :: cout << "-----------------------------------" << std :: endl;
		iter(tab, 5, print);
		std :: cout << "-----------------------------------" << std :: endl;
		iter(tab1, 5, print);
		std :: cout << "-----------------------------------" << std :: endl;
		iter(tab2, 5, print);
	}
	return 0;
}