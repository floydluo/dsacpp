
#pragma once

template <typename T> 
ListNodePosi(T) List<T>::search ( T const& e, int n, ListNodePosi(T) p ) const {
// assert: 0 <= n <= rank(p) < _size
	printf ( "searching for " ); 
	print ( e );
	printf ( " :\n" );
	
	while ( 0 <= n-- ) { 
		printf ( "  <%4d>", p->pred->data );
		if ( ( ( p = p->pred )->data ) <= e ) 
			break; 
	} 
	printf ( "\n" );
// assert: 
	return p;
}