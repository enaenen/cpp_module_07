template <typename T>
Array<T>::Array( void ) : element(), size( 0 ) {
	element = new T[0];
}
Array( unsigned int n );
Array( const Array *ref );
Array &operator=( const Array &ref );
~Array( void );
T &operator=( const Array &ref );
T &operator[]( const unsigned int idx );
T &operator[]( const unsigned int idx ) const;

unsigned int size( void ) const;
const T *getElementAddr( void ) const;
