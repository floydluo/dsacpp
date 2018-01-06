
#pragma once

#include <stdio.h> //采用C风格的精细控制输出格式

#include "../graph/Graph.h" //
#include "../graphMatrix/GraphMatrix.h" //

/******************************************************************************************
 * 数据元素、数据结构通用的输出接口
 ******************************************************************************************/

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

   
   //static void p ( HuffChar& ); //
   static void p ( VStatus ); //图顶点的状态
   static void p ( EType ); //图边的类型

   template <typename Tv, typename Te>
   static void p(GraphMatrix<Tv, Te>&); //Graph
   
   template <typename T> 
   static void p ( T& ); //向量、列表等支持traverse()遍历操作的线性结构

   template <typename T> 
   static void p ( T* s ) {
	   s ? p ( *s ) : print ( "<NULL>" );
   } //统一转为引用
}; //UniPrint

#include "print_implementation.h"