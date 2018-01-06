
#pragma once

template <typename T> void List<T>::reverse() { 
	if ( _size < 2 ) 
		return; 
	for ( ListNodePosi(T) p = header; p; p = p->pred )
		swap( p->pred, p->succ ); 
	swap( header, trailer ); 
}