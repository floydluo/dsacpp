#include "../_share/util.h"
#include "../UniPrint/print_int_array.h"

/*--------------Original Format of Iterative Method ------------*/

void reverse ( int* A, int lo, int hi ) {
next: //Inception of Algorithm adds the sign of switching
	 if ( lo < hi ) {
		swap ( A[lo], A[hi] ); 
		lo++; 
		hi--; 
		goto next; 
	} 
} //O(hi - lo + 1)