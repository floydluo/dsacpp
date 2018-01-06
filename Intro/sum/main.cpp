#include <time.h>
#include <iostream>
using namespace std;


#include "../random/shuffle.h"
#include "../UniPrint/print_int_array.h"
#include "../sum/sum.h"

// pay attention, here we use a file from other folders
#include "../reverse/reverse.h"


int main ( int argc, char* argv[] ) {
	int n = ( 1 < argc ) ? atoi ( argv[1] ) : 7; 
	int* A = ( int* ) malloc ( n * sizeof ( int ) ); 
	srand ( ( unsigned int ) time ( NULL ) );
	for ( int i = 0; i < n; i++ ) 
		A[i] = i;
	shuffle ( A, n ); 
	print ( A, n );

	printf ( "SumI  = %d\n", sumI ( A, n ) );
	printf ( "SumR1 = %d\n", sum ( A, n ) );
	printf ( "SumR2 = %d\n\n", sum ( A, 0, n - 1 ) );
	
	// using reverse
	reverse ( A, n ); print ( A, n ); 
	printf ( "SumI  = %d\n", sumI ( A, n ) );
	printf ( "SumR1 = %d\n", sum ( A, n ) );
	printf ( "SumR2 = %d\n\n", sum ( A, 0, n - 1 ) );
	free ( A );
	
	// \a, alert, there will be a noise
	printf ( "Test done.\a\n" );
	return 0;
}
