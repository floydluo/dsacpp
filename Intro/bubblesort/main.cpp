
#include "../_share/util.h"
#include "../random/shuffle.h"
#include "../UniPrint/print_int_array.h"

void bubblesort ( int A[], int n ); //algorithm#0
void bubblesort1A ( int A[], int n ); //algorithm#1A
void bubblesort1B ( int A[], int n ); //algorithm#1B
void bubblesort2 ( int A[], int n ); //algorithm#2

/******************************************************************************************
 * generate a random Array
 ******************************************************************************************/
void randomArray ( int A[], int n, int seed ) {
	srand ( seed );
	for ( int i = 0; i < n; i++ ) A[i] = i;
	shuffle ( A, 0, n / 3 );
	shuffle ( A, 2 * n / 3, n );
}

/******************************************************************************************
 * test bubble sort algorithms
 ******************************************************************************************/
void main ( int argc, char* argv[] ) {
	int n = 0; //array length
	
	if ( 1 < argc ) 
		n = atoi ( argv[1] ); 
	
	if ( n < 0 ) 
		n = 0; //make sure length is non-negative

	int* A = ( int* ) malloc ( n * sizeof ( int ) ); //allocate an array of size n

	//A same seed is used here for comparison between different algorithms
	unsigned int seed = ( unsigned int ) time ( NULL );

   
	printf ( "\n== Bubblesort algorithm #0 ========\n" );
	randomArray ( A, n, seed ); //create a randomized array using the same seed
    printf ( "-->  " ); 
    print ( A, n );
    bubblesort ( A, n ); //sort the array using algorithm#0
    printf ( "==>  " ); 
    print ( A, n );

    printf ( "\n== Bubblesort algorithm #1A ========\n" );
    randomArray ( A, n, seed ); //create a randomized array using the same seed
    printf ( "==>  " ); 
    print ( A, n );
    bubblesort1A ( A, n ); //sort the array using algorithm#1A
    printf ( "==>  " ); 
    print ( A, n );

    printf ( "\n== Bubblesort algorithm #1B ========\n" );
    randomArray ( A, n, seed ); //create a randomized array using the same seed
    printf ( "==>  " ); 
    print ( A, n );
    bubblesort1B ( A, n ); //sort the array using algorithm#1B
    printf ( "==>  " );
    print ( A, n );

    printf ( "\n== Bubblesort algorithm #2 ========\n" );
    randomArray ( A, n, seed ); //create a randomized array using the same seed
    printf ( "==>  " ); 
    print ( A, n );
    bubblesort2 ( A, n ); //sort the array using algorithm#2
    printf ( "==>  " ); 
    print ( A, n );

    free ( A ); //release the array
}