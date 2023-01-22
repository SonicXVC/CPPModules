#include "whatever.hpp"
#include <iostream>
#include <string>

class Awesome {
		public:
			Awesome(void) : _n(0) {}
			Awesome(int n) : _n(n) {}
			Awesome &operator=(Awesome &a) {_n = a._n; return *this; }
			bool operator==(Awesome const &rhs) {return _n == rhs._n;}
			bool operator!=(Awesome const &rhs) {return _n != rhs._n;}
			bool operator>(Awesome const &rhs) {return _n > rhs._n;}
			bool operator<(Awesome const &rhs) {return _n < rhs._n;}
			bool operator>=(Awesome const &rhs) {return _n >= rhs._n;}
			bool operator<=(Awesome const &rhs) {return _n <= rhs._n;}
			int get_n(void) const {return _n; }
		private:
			int _n;
	};
	std :: ostream & operator<<(std :: ostream & o, const Awesome & a) {o << a.get_n(); return o; }

int main( void ) {
	{
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
	float a = 2.56;
	float b = 3.08;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	char c = 'c';
	char d = 'd';
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	Awesome A(2), B(3);
	std::cout << "A = " << A << ", B = " << B << std::endl;
	::swap( A, B );
	std::cout << "A = " << A << ", B = " << B << std::endl;
	std::cout << "min( A, B ) = " << ::min( A, B ) << std::endl;
	std::cout << "max( A, B ) = " << ::max( A, B ) << std::endl;
	return 0;
}