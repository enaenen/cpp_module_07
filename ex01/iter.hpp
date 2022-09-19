#pragma once

#include <iostream>

template <typename T>
void iter( T *addr, const size_t len, void ( *func )( T &elem ) ) {
	for ( size_t i = 0; i < len; i++ ) func( addr[i] );
}

template <typename T>
void iter( const T *addr, const size_t len, void ( *func )( const T &elem ) ) {
	for ( size_t i = 0; i < len; i++ ) func( addr[i] );
}

template <typename T>
void print_arr( T &elem ) {
	std::cout << elem << " ";
}
