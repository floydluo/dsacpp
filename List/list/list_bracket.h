
#pragma once

template <typename T> 

T& List<T>::operator[] ( Rank r ) const { 
	//assert: 0 <= r < size
	ListNodePosi(T) p = first(); 
	while ( 0 < r-- ) 
		p = p->succ; 
	return p->data; 
}