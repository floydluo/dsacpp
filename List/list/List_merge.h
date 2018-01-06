
#pragma once

template <typename T> 
void List<T>::merge ( ListNodePosi(T) & p, int n, List<T>& L, ListNodePosi(T) q, int m ) {
// assert:  this.valid(p) && rank(p) + n <= size && this.sorted(p, n)
//          L.valid(q) && rank(q) + m <= L._size && L.sorted(q, m)
	ListNodePosi(T) pp = p->pred; 
	while ( 0 < m ) 
		if ( ( 0 < n ) && ( p->data <= q->data ) ) {
			if ( q == ( p = p->succ ) ) 
				break; 
			n--; 
		} 
		else { 
			insertB( p, L.remove ( ( q = q->succ )->pred ) );
			m--; 
		}
	p = pp->succ; 
}