#include "whatever.hpp"
/* evaluation
class Awesome {
   public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }

   private:
	int _n;
};

std::ostream& operator<<( std::ostream& os, Awesome& awe ) {
	os << awe.get() << std::endl;
	return os;
}

template <typename>
void print( T const& x ) {
	std::cout << x << std::endl;
}

int main() {
	int tab[] = { 0, 1, 2, 3, 4 };
	iter( tab, 5, print );

	return 0;
}
*/
int main( void ) {
	int a = 2;
	int b = 3;
	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	swap( c, d );
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}
