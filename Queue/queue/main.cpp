
#include "queue_test.h"

int testID = 0;

template <typename T> 
void testQueue ( int n ) {
	Queue<T> Q;
	printf ( "\n  ==== Test %2d. Growing queue\n", testID++ );
	while ( Q.size() < n ) {
		( Q.empty() || ( 30 < dice ( 100 ) ) ) ?
			Q.enqueue ( dice ( ( T ) 2 * n ) ) :
			Q.dequeue(); 
		print ( Q );
	}
	
	printf ( "\n  ==== Test %2d. Shrinking queue\n", testID++ );
	while ( !Q.empty() ) {
		( 70 < dice ( 100 ) ) ?
			Q.enqueue ( dice ( ( T ) 2 * n ) ) : 
			Q.dequeue(); 
		print ( Q );
	}
}

int main ( int argc, char* argv[] ) {
	if ( 2 > argc ) {
		printf ( "Usage: %s <size of test>\a\a\n", argv[0] ); 
		return 1; 
	}
   
	srand ( ( unsigned int ) time ( NULL ) );
   
	testQueue<int> ( atoi ( argv[1] ) ); 
	return 0;
}