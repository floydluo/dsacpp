
#pragma once

#include "listNode.h" 

template <typename T> class List { 

private:
	int _size;
	ListNodePosi(T) header; 
	ListNodePosi(T) trailer; 

protected:
	void init(); 
	int clear(); 
	void copyNodes ( ListNodePosi(T), int ); 
	void merge ( ListNodePosi(T)&, int, List<T>&, ListNodePosi(T), int );
	void mergeSort ( ListNodePosi(T)&, int ); 
	void selectionSort ( ListNodePosi(T), int ); 
	void insertionSort ( ListNodePosi(T), int );

public:
	List(){ 
		init(); 
	} 

	List ( List<T> const& L ); 
	List ( List<T> const& L, Rank r, int n ); 
	List ( ListNodePosi(T) p, int n ); 
	// self-distroy
	~List(); 

	/*--- List's Static methods ---*/

	Rank size() const { 
		return _size; 
	} 

	// List is empty or not?
	bool empty() const { 
		return _size <= 0; 
	} 

	T& operator[] ( Rank r ) const; 

	ListNodePosi(T) first() const { 
		return header->succ; 
	} 

	ListNodePosi(T) last() const { 
		return trailer->pred;
	} 

	bool valid ( ListNodePosi(T) p ) { 
		return p && ( trailer != p ) && ( header != p ); 
	}
   
	int disordered() const; 
	ListNodePosi(T) find ( T const& e ) const {
		return find ( e, _size, trailer ); 
	}
   
	ListNodePosi(T) find ( T const& e, int n, ListNodePosi(T) p ) const; 
   
	ListNodePosi(T) search ( T const& e ) const { 
		return search ( e, _size, trailer ); 
	}

	ListNodePosi(T) search ( T const& e, int n, ListNodePosi(T) p ) const; 
  
	ListNodePosi(T) selectMax ( ListNodePosi(T) p, int n ); 
   
	ListNodePosi(T) selectMax() { return selectMax ( header->succ, _size ); } 

	/*--- List's Dynamic methods ---*/
   
	ListNodePosi(T) insertAsFirst ( T const& e ); 
   
	ListNodePosi(T) insertAsLast ( T const& e ); 
   
	ListNodePosi(T) insertA ( ListNodePosi(T) p, T const& e ); 

	ListNodePosi(T) insertB ( ListNodePosi(T) p, T const& e ); 
   
	T remove ( ListNodePosi(T) p ); 
	
	void merge ( List<T>& L ) { 
		merge ( first(), size, L, L.first(), L._size ); 
	} 
  
	void sort ( ListNodePosi(T) p, int n ); 
	
	void sort() { sort ( first(), _size ); } 
	
	int deduplicate(); 
  
	int uniquify();
   
	void reverse(); 
	
	/*--- List's Traverse methods ---*/
	void traverse ( void (* ) ( T& ) ); 
	template <typename VST> void traverse ( VST& ); 
}; //List

#include "List_implementation.h"
