
/* Iterative Method for Summing.*/

int sumI ( int A[], int n ) { 
	int sum = 0; 
	for ( int i = 0; i < n; i++ ) 
		 sum += A[i]; 
	return sum; 
} 
//O(1) + O(n)*O(1) + O(1) = O(n+2) = O(n)