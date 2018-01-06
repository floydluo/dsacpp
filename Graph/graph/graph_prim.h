
#pragma once

template <typename Tv, typename Te> 
void Graph<Tv, Te>::prim ( int s ) { 
	//assert: 0 <= s < n
	reset();
	priority ( s ) = 0;
	for ( int i = 0; i < n; i++ ) { 
		status ( s ) = VISITED;
		if ( -1 != parent ( s ) ) type ( parent ( s ), s ) = TREE; 
		for ( int j = firstNbr ( s ); -1 < j; j = nextNbr ( s, j ) ) 
			if ( ( status ( j ) == UNDISCOVERED ) && ( priority ( j ) > weight ( s, j ) ) ){
				priority ( j ) = weight ( s, j );
				parent ( j ) = s; 
			}
		for ( int shortest = INT_MAX, j = 0; j < n; j++ )
			if ((status(j) == UNDISCOVERED) && (shortest > priority(j))) {
				shortest = priority(j);
				s = j;
			}
	}
}