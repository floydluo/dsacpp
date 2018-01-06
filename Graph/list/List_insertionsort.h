
#pragma once

template <typename T> 
void List<T>::insertionSort ( ListNodePosi(T) p, int n ) { 
	//valid(p) && rank(p) + n <= size
	printf ( "InsertionSort ...\n" );
	for ( int r = 0; r < n; r++ ) { 
		insertA ( search ( p->data, r, p ), p->data ); 
		p = p->succ; 
		remove ( p->pred ); 
	}
}

