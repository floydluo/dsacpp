
#include "../_share/util.h" 
#include "../UniPrint/print_int_array.h"

void bubblesort1B ( int A[], int n ) { //0 <= n
	int cmp = 0, swp = 0; //<--|
	// Understand: sorted = !sorted
	// sorted need to be true if the loop continues
	// At the first time, sorted = F, then sorted = !F, sorted = T, the loop continues.
	// Then, in every loop, sorted is T.
	// If there is an unsorted pair, sorted = F, then, to its begin, sorted = !F = T
	// loop continues
	// if the loop has no unsorted pair, sorted is T for this loop.
	// then for next loop, sorted = !T = F, the whole loop ends.
	// Interesting!
	for ( bool sorted = false; sorted = !sorted; n-- ) { 
		for ( int i = 1; i < n; i++ ) { 
			if ( A[i-1] > A[i] ) { 
				swap ( A[i-1], A[i] ); 
				sorted = false; 
				swp++;
				printf ( "%3d: ", n ); 
				print ( A, n, i - 1, i + 1 ); 
			}
			cmp++;
		}
	}
	printf ( "#comparison = %d, #swap = %d\n", cmp, swp ); 
} 