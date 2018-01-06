#pragma once
// to fix error 'min': identifier not found
#include <Windows.h>


template <typename Tv, typename Te> void Graph<Tv, Te>::bcc ( int s ) { 
	reset(); 
	int clock = 0; 
	int v = s; 
	Stack<int> S; 
	do
		if ( UNDISCOVERED == status ( v ) ) {
			BCC ( v, clock, S ); 
			S.pop(); 
		}
	while ( s != ( v = ( ++v % n ) ) );
}

#define hca(x) (fTime(x)) 

template <typename Tv, typename Te> 
void Graph<Tv, Te>::BCC ( int v, int& clock, Stack<int>& S ) { 
	//assert: 0 <= v < n
	hca ( v ) = dTime ( v ) = ++clock; 
	status ( v ) = DISCOVERED; 
	S.push ( v ); 
	for ( int u = firstNbr ( v ); -1 < u; u = nextNbr ( v, u ) ) 
		switch ( status ( u ) ) { 
		case UNDISCOVERED:
			parent ( u ) = v; 
			type ( v, u ) = TREE; 
			BCC ( u, clock, S ); 			
			if ( hca ( u ) < dTime ( v ) )
				hca ( v ) = min( hca ( v ), hca ( u ) ); 
			else { 
				printf ( "BCC rooted at %c:", vertex ( v ) );
				Stack<int> temp; do { temp.push ( S.pop() ); 
				print ( vertex ( temp.top() ) ); } 
				while ( v != temp.top() ); 
				while ( !temp.empty() ) 
					S.push ( temp.pop() );
				while ( v != S.pop() );
				S.push ( v );
				printf ( "\n" );
			}
			break;

         case DISCOVERED:
			 type ( v, u ) = BACKWARD; 
			 if ( u != parent ( v ) ) hca ( v ) = min ( hca ( v ), dTime ( u ) ); 
			 break;

         default: 
			 //VISITED (digraphs only)
             type ( v, u ) = ( dTime ( v ) < dTime ( u ) ) ? 
				 FORWARD : CROSS;
             break;
		}
	status ( v ) = VISITED;
}
#undef hca