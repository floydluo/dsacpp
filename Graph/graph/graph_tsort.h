
#pragma once

template <typename Tv, typename Te> 
Stack<Tv>* Graph<Tv, Te>::tSort ( int s ) { 
	//assert: 0 <= s < n
	reset();
	int clock = 0; 
	int v = s;
	Stack<Tv>* S = new Stack<Tv>; 
	do {
		if ( UNDISCOVERED == status ( v ) )
			if ( !TSort ( v, clock, S ) ) { 
				print ( S );
				while ( !S->empty() )
					S->pop(); 
				break; 
			}
	} 
	while ( s != ( v = ( ++v % n ) ) );
	return S; 
}

template <typename Tv, typename Te> 
bool Graph<Tv, Te>::TSort ( int v, int& clock, Stack<Tv>* S ) { 
	//assert: 0 <= v < n
	dTime ( v ) = ++clock; 
	status ( v ) = DISCOVERED; 
	for ( int u = firstNbr ( v ); -1 < u; u = nextNbr ( v, u ) )
		switch ( status ( u ) ) { 
         
		case UNDISCOVERED:
			parent ( u ) = v; 
			type ( v, u ) = TREE;
            if ( !TSort ( u, clock, S ) ) 
				return false; 
			break;
         
		case DISCOVERED:
			type ( v, u ) = BACKWARD; 
            return false; 
         
		default:
			//VISITED (digraphs only)
            type ( v, u ) = ( dTime ( v ) < dTime ( u ) ) ? FORWARD : CROSS;
            break;
		}
	status ( v ) = VISITED; S->push ( vertex ( v ) ); 
	return true; 
}