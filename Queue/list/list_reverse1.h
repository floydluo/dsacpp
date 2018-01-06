
#pragma once

template <typename T> void List<T>::reverse() { 
	ListNodePosi(T) p = header; 
	ListNodePosi(T) q = trailer; 
	for ( int i = 1; i < _size; i += 2 )
		swap( ( p = p->succ )->data, ( q = q->pred )->data ); 
}