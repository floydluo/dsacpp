
#pragma once

#include <stdio.h> //采用C风格的精细控制输出格式


template <typename T> static
void print ( T* x ) { 
	x ? print ( *x ) : printf ( " <NULL>" );  
}

template <typename T> 
static void print ( T& x ) {  
	UniPrint::p ( x );  
}

template <typename T> 
static void print ( const T& x ) { 
	UniPrint::p ( x );  
} //for Stack

static void print ( char* x ) {  
	printf ( " %s", x ? x : "<NULL>" );  
} //String

static void print ( const char* x ) {  
	printf ( " %s", x ? x : "<NULL>" );  
} //String


class UniPrint {
public:
   static void p ( int );
   static void p ( float );
   static void p ( double );
   static void p ( char );
  
   template <typename T> 
   static void p ( T& ); //向量、列表等支持traverse()遍历操作的线性结构

   template <typename T> 
   static void p ( T* s ) {
	   s ? p ( *s ) : print ( "<NULL>" );
   } //统一转为引用
}; //UniPrint

#include "print_implementation.h"