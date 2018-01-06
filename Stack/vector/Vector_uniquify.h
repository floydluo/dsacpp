#include "vector.h"
#pragma once

template <typename T> int Vector<T>::uniquify() { //有序向量重复元素删除算法（高效版）
   Rank i = 0, j = 0; //各对互异相邻元素的秩序
   while ( ++j < _size )
      if ( _elem[i] != _elem[j] ) 
         _elem[++i] = _elem[j]; 
   _size = ++i; 
   shrink(); 
   return j - i; 
}



