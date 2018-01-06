
#include "../_share/util.h"
#include "../UniPrint/print_int_array.h"

/*--------------Neat Format of Iterative Method ------------*/

void reverse ( int* A, int lo, int hi ) { 
	while ( lo < hi ) 
		swap ( A[lo++], A[hi--] );
} //O(hi - lo + 1)


