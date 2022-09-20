template <typename T>
Array<T>::Array( void ) : element( NULL ), _size( 0 ) {
	element = new T[0];
}

template <typename T>
Array<T>::Array( unsigned int n ) : element( NULL ), _size( n ) {
	element = new T[n];
	for ( unsigned int i = 0; i < n; i++ ) element[i] = T();
};

template <typename T>
Array<T>::Array( const Array &ref ) : element( NULL ), _size( ref._size ) {
	*this = ref;
}

template <typename T>
Array<T> &Array<T>::operator=( const Array &ref ) {
	if ( this == &ref )
		return *this;
	if ( element ) {
		delete[] element;
		element = NULL;
		_size = 0;
	}
	element = new T[ref._size];
	_size = ref._size;
	for ( unsigned int i = 0; i < ref._size; i++ ) {
		element[i] = ref.element[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array( void ) {
	if ( element ) {
		delete[] element;
		element = NULL;
		_size = 0;
	}
}

template <typename T>
T &Array<T>::operator[]( const unsigned int idx ) {
	if ( _size <= idx )
		throw std::out_of_range( "array index out of range" );
	return element[idx];
}

template <typename T>
const T &Array<T>::operator[]( const unsigned int idx ) const {
	if ( _size <= idx )
		throw std::out_of_range( "array index out of range" );
	return element[idx];
}

template <typename T>
unsigned int Array<T>::size( void ) const {
	return _size;
}

template <typename T>
const T *Array<T>::getElementAddr( void ) const {
	return element;
}
