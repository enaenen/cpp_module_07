#pragma once

#include <iostream>
#include <exception>
#include <stdexcept>

#define MAX_VAL 750

template <typename T>
class Array {
   private:
	T *element;
	unsigned int size;

   public:
	Array( void );
	Array( unsigned int n );
	Array( const Array *ref );
	Array &operator=( const Array &ref );
	~Array( void );
	T &operator=( const Array &ref );
	T &operator[]( const unsigned int idx );
	T &operator[]( const unsigned int idx ) const;

	unsigned int size( void ) const;
	const T *getElementAddr( void ) const;
};

#include "Array.tpp"