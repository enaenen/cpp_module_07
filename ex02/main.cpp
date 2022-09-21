

#include "Array.hpp"

int main( int, char** ) {
	{
		std::cout << "========== MANDATORY ==========" << std::endl;
		Array<int> numbers( MAX_VAL );
		int* mirror = new int[MAX_VAL];
		srand( time( NULL ) );
		for ( int i = 0; i < MAX_VAL; i++ ) {
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		// SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test( tmp );
		}

		for ( int i = 0; i < MAX_VAL; i++ ) {
			if ( mirror[i] != numbers[i] ) {
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try {
			numbers[-2] = 0;
		} catch ( const std::exception& e ) {
			std::cerr << e.what() << '\n';
		}
		try {
			numbers[MAX_VAL] = 0;
		} catch ( const std::exception& e ) {
			std::cerr << e.what() << '\n';
		}

		for ( int i = 0; i < MAX_VAL; i++ ) {
			numbers[i] = rand();
		}
		delete[] mirror;  //
	}
	{
		std::cout << "========== Additional Default Constructor =========="
				  << std::endl;
		Array<int> arr;
		std::cout << "arr size() : " << arr.size() << std::endl;
		std::cout << "arr element addr : " << arr.getElementAddr() << std::endl;
	}
	{
		std::cout << "========== operator[] TEST ==========" << std::endl;
		Array<int> arr( 20 );
		for ( unsigned int i = 0; i < arr.size(); i++ ) {
			arr[i] = i * 10;
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}
	{
		std::cout << "========== operator[] OUT OF INDEX TEST =========="
				  << std::endl;
		Array<int> arr( 20 );
		try {
			for ( unsigned int i = 0; i < arr.size() + 30; i++ ) {
				arr[i] = i * 10;
				std::cout << arr[i] << " ";
			}
			std::cout << std::endl;

		} catch ( std::exception& e ) {
			std::cout << std::endl;
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "========== Copy constructor TEST =========" << std::endl;
		Array<int> a( 20 );
		std::cout << "a elements: ";
		for ( unsigned int i = 0; i < a.size(); i++ ) {
			a[i] = i;
		}
		for ( unsigned int i = 0; i < a.size(); i++ ) {
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;

		Array<int> b( a );
		std::cout << "b elements: ";

		for ( unsigned int i = 0; i < a.size(); i++ ) {
			std::cout << a[i] << " ";
		}
		std::cout << std::endl << std::endl;
	}

	return 0;
}