
__int64 fib ( int n, __int64& prev ) { 
	if ( 0 == n ) {
		prev = 1; return 0;
	}

	else {
		__int64 prevPrev; prev = fib ( n - 1, prevPrev ); 
		return prevPrev + prev; 
	}
} 