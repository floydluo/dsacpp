
#include "../_share/util.h" 
#include "../UniPrint/print_int_array.h" 

void bubblesort1A ( int A[], int n ) { 
	//Bubble Sort (Version:1A) 0 <= n
	int cmp = 0, swp = 0;	
	bool sorted = false; 
	//the flag for ordered sequence; 
	//assume it is not in order at first.
	while ( !sorted ) { //if not sorted
		sorted = true; 
		// not we assume it is sorted; 
		//change the varible sorted from false to true
		for ( int i = 1; i < n; i++ ) { 
			if ( A[i - 1] > A[i] ) { //disorder adjacent elements
				swap ( A[i - 1], A[i] ); 
				sorted = false; 
				//if there is disorder adjacent elements,
				//we know that it is not ordered.
            
				swp++;
				printf ( "%3d: ", n ); /*DSA*/
				print ( A, n, i - 1, i + 1 ); /*DSA*/
			}
			cmp++; 
		}
		n--; //change the size from n to n-1
	}
	printf ( "#comparison = %d, #swap = %d\n", cmp, swp ); 
	// record the number of comparison and swap
} 