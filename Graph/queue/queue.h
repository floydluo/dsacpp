
#pragma once

#include "../List/List.h" 

template <typename T> 
class Queue: public List<T> {

public: 
	//size() and empty() are inherited from List
   
	void enqueue ( T const& e ) { 
		insertAsLast ( e ); 
	} 
	
	T dequeue() { 
		return remove ( first() );
	} 
   
	T& front() { 
		return first()->data;
	}
};

#include "queue_implementation.h"