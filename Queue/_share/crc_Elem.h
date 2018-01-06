﻿
#pragma once

template <typename T> struct Crc { //函数对象：累加T类对象的特征，比如总和，以便校验对象集合
   T& c;
   Crc ( T& crc ) : c ( crc ) {}
   virtual void operator() ( T& e ) { 
	   c += e; 
   } //假设T可以直接相加
};