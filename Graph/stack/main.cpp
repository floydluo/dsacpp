
#include "stack_test.h"

int testID = 0; 

template <typename T> 
void testStack ( int n ) {
	
	Stack<T> S;
	
	printf ( "\n  ==== Test %2d. Growing stack\n", testID++ );
	while ( S.size() < n ) {
		T e = rand() % ( T ) 2 * n;
		if ( S.empty() || ( 30 < ( rand() % 100 ) ) ) { 
			printf ( "pushing " ); print ( e ); printf ( " ...\n" );
			S.push ( e );
		}
		else { 
			printf ( "poping with ... " ); 
			print ( S.pop() ); 
			printf ( "\n" );
		}
		print ( S );
	}

	printf ( "\n  ==== Test %2d. Shrinking stack\n", testID++ );
	while ( !S.empty() ) {
		T e = dice ( ( T ) 2 * n );
		if ( 70 < dice ( 100 ) ) { 
			printf ( "pushing " ); 
			print ( e ); 
			printf ( " ...\n" );
			S.push ( e );
		} 
		else {
         printf ( "poping with ... " );
		 print ( S.pop() ); 
		 printf ( "\n" );
      }
      print ( S );
   }
}


int main ( int argc, char* argv[] ) {
	if ( 2 > argc ) {
		printf ( "Usage: %s <size of test>\a\a\n", argv[0] ); 
		return 1;
	}

	srand ( ( unsigned int ) time ( NULL ) ); 
	testStack<int> ( atoi ( argv[1] ) ); 
	return 0;
}