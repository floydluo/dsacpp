
/*--------------Divide and Conquer--------------*/

int sum ( int A[], int lo, int hi ) { 
	if ( lo == hi ) 
		// At the bottom
		// A[lo, hi]
		return A[lo]; 
	else { 
		// in recursive, get the middle point of the array.
		int mi = ( lo + hi ) >> 1; 
		// A[lo, mi], A[mi+1, hi]
		return sum ( A, lo, mi ) + sum ( A, mi + 1, hi ); 
   }
} //O(hi - lo + 1)