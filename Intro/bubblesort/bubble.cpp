
#include "../_share/util.h"
#include "../UniPrint/print_int_array.h"

void bubblesort ( int A[], int n ) { 
	//气泡算法排序 （版本0） <= n
	int cmp = 0, swp = 0;

    while ( n-- ) { 
		//在尚未确认已全局排序之前，逐趟进行扫描交换。
		// so it will complete n loops.
		for ( int i = 0; i < n; i++ ) { 
			//from left to right, 
			//check adjacent elements in pairs in domain of A[0,n)
			if ( A[i] > A[i+1] ) { //once A[i] > A[i+1]
				swap ( A[i], A[i+1] ); //change the order
				swp++; 
				printf ( "%3d: ", n );
				print ( A, n, i, i + 2 );
			}
			cmp++;
		}
	}
	printf ( "#comparison = %d, #swap = %d\n", cmp, swp );
} 
// brutal algorithms, 
// it cannot end in advance when the whole sequence is in order. 