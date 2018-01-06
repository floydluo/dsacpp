
#pragma once

template <typename Tv, typename Te> struct DfsPU { 
	virtual void operator() ( Graph<Tv, Te>* g, int uk, int v ) {
		if ( g->status ( v ) == UNDISCOVERED )
			if ( g->priority ( v ) > g->priority ( uk ) - 1 ) { 
				g->priority ( v ) = g->priority ( uk ) - 1; 
				g->parent ( v ) = uk; 
				return; 
			}
	}
};