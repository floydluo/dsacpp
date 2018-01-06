
#pragma once

template <typename T> int List<T>::deduplicate() { 
	if ( _size < 2 ) return 0; 
	int oldSize = _size; 
	ListNodePosi(T) p = header; Rank r = 0; 
	while ( trailer != ( p = p->succ ) ) { 
		ListNodePosi(T) q = find ( p->data, r, p ); 
		q ? remove ( q ) : r++; 
	} 
	return oldSize - _size; 
}