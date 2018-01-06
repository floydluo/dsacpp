#pragma once

typedef int Rank; //Rank is a data type now
#define ListNodePosi(T) ListNode<T>* 
				  //define ListNode<T>* is ListNodePosi(T) 
				  //physical position, or pointer.

template <typename T> struct ListNode { 
	// 
	T data;
	ListNodePosi(T) pred; 
	ListNodePosi(T) succ; //point, just succ's position
	// 
	// init() for this template class.
	ListNode() {
	}

	ListNode ( T e, ListNodePosi(T) p = NULL, ListNodePosi(T) s = NULL )
		: data ( e ), pred ( p ), succ ( s ) {
	} 

	// Methods
	ListNodePosi(T) insertAsPred ( T const& e ); 
	ListNodePosi(T) insertAsSucc ( T const& e ); 
};

#include "listNode_implementation.h"