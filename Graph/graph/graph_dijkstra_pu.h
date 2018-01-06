
#pragma once

template <typename Tv, typename Te> struct DijkstraPU { 
	virtual void operator() ( Graph<Tv, Te>* g, int uk, int v ) {
      if ( UNDISCOVERED == g->status ( v ) )
		  if ( g->priority ( v ) > g->priority ( uk ) + g->weight ( uk, v ) ) { 
			  g->priority ( v ) = g->priority ( uk ) + g->weight ( uk, v );
			  g->parent ( v ) = uk;
		  }
	}
};