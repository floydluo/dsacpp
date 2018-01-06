
#include "../_share/util.h"
#include "../UniPrint/print_int_array.h"

/*-------------- Format of Reversive Method ------------*/

void reverse ( int* A, int lo, int hi ) {
	if ( lo < hi ) {
		swap ( A[lo], A[hi] ); 
		reverse ( A, lo + 1, hi - 1 ); 
	/*-------------
	else (lo >= hi)
		do nothing
	---------------*/
	} 
} //O(hi - lo + 1)

