
__int64 fib ( int n ) {
	return ( 2 > n ) ? 
		( __int64 ) n : fib ( n - 1 ) + fib ( n - 2 ); 
}