
#pragma once

template <typename T> void List<T>::init() {
	// Initialization
	header = new ListNode<T>; 
	trailer = new ListNode<T>; 
	
	header->succ = trailer; 
	header->pred = NULL;
	
	trailer->pred = header; 
	trailer->succ = NULL;
	_size = 0; 
}