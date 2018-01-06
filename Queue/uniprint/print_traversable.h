#pragma once

template <typename T> 
void UniPrint::p ( T& s ) { //引用
   printf ( "%s[%d]*%d:\n", typeid ( s ).name(), &s, s.size() ); //基本信息
   s.traverse ( print ); //通过print()遍历输出所有的元素
   printf ( "\n" );
}