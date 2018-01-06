
#include "../_share/util.h" 
#include "../UniPrint/print_int_array.h"

void bubblesort2 ( int A[], int n ) { 
	// Bubble Sort Version 2; 
	// 0 <= n
	int cmp = 0, swp = 0; 
	for ( int m; 1 < n; n = m ) {
		for ( int i = m = 1; i < n; i++ ) { 
			if ( A[i-1] > A[i] ) { 
				// if there are disorder adjacent elements
				swap ( A[i-1], A[i] ); 
				m = i; // change the interval length
				swp++; // record this swap
				printf( "%3d: ", n ); /*DSA*/
				print(A, n, i - 1, i + 1);/*DSA*/
			}
			cmp++;// record this comparison.
		}
	}
	printf ( "#comparison = %d, #swap = %d\n", cmp, swp ); /*DSA*/
} 