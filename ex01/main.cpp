#include "iter.hpp"

int main( void ) {
	std::cout << "Template Iter Int Test" << std::endl;
	int intArr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	iter( intArr, 10, print_arr );
	std::cout << std::endl << std::endl;
	;

	std::cout << "Template Iter Double Test" << std::endl;
	double dblArr[10] = { 0.000,   0.1111,  0.22222, 0.3333, 0.44444,
						  0.55555, 0.66666, 0.77777, 0.8888, 0.99999 };
	iter( dblArr, 10, print_arr );
	std::cout << std::endl << std::endl;

	std::cout << "Template Iter Float Test" << std::endl;
	float fArr[10] = { 0.123,   0.234,  0.345,  0.4444, 0.5555,
					   0.66666, 0.7777, 0.8888, 0.9999, 1.123 };
	iter( fArr, 10, print_arr );
	std::cout << std::endl << std::endl;

	std::cout << "Template Iter String Test" << std::endl;
	std::string const stringArr[10] = { "Alpha", "Bravo",   "Charlie", "Delta",
										"Echo",  "Foxtrot", "Golf",    "Hotel",
										"India", "Juliett" };
	iter( stringArr, 10, print_arr );
	std::cout << std::endl << std::endl;
}