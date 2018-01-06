
/* -------------------------------
	The Array is A[0, n)
	The last element is A[n-1]
--------------------------------*/

int sum( int A[], int n ) { 
	 if ( n <= 0 ) 
		 // at the bottom
		 return 0; 
	 else 
	     return sum( A, n - 1 ) + A[n - 1]; 
} 

//O(1) * recursive depth = O(1)*(n + 1) = O(n)