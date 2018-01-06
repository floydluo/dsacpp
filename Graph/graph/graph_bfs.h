#pragma once

template <typename Tv, typename Te>
void Graph<Tv, Te>::bfs ( int s ) { 
	//assert: 0 <= s < n
	reset();
	int clock = 0; 
	int v = s;
	do 
		if ( UNDISCOVERED == status ( v ) ) 
			BFS ( v, clock ); 
	while ( s != ( v = ( ++v % n ) ) ); 
}

template <typename Tv, typename Te>
void Graph<Tv, Te>::BFS ( int v, int& clock ) { 
	//assert: 0 <= v < n
	Queue<int> Q; 
	status ( v ) = DISCOVERED; 
	Q.enqueue ( v );
	while ( !Q.empty() ) { 
		int v = Q.dequeue();
		dTime ( v ) = ++clock;
		for ( int u = firstNbr ( v ); -1 < u; u = nextNbr ( v, u ) )
			if ( UNDISCOVERED == status ( u ) ) { 
				status ( u ) = DISCOVERED; 
				Q.enqueue ( u );
				type ( v, u ) = TREE; 
				parent ( u ) = v; 
			} 
			else { 
				type ( v, u ) = CROSS;
			}
			status ( v ) = VISITED;
	}
}