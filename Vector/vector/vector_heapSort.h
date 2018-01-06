/*
#pragma once

template <typename T> void Vector<T>::heapSort ( Rank lo, Rank hi ) { 
	//0 <= lo < hi <= size
	printf ( "\tHEAPsort [%3d, %3d)\n", lo, hi );
	PQ_ComplHeap<T> H ( _elem + lo, hi - lo ); 
	while ( ! H.empty() ) {
		_elem[--hi] = H.delMax(); 
		for ( int i = lo; i < hi; i++ ) 
			print( H[i] );
		print(_elem[hi]); 
		printf("\n");
	}
}
*/