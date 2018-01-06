#pragma once

class Fib { //Fibonacci
private:
   int f, g; //f = fib(k - 1), g = fib(k)
public:
   Fib ( int n ) { 
	   f = 1; 
	   g = 0; 
	   while ( g < n ) 
		   next(); 
   } //fib(-1), fib(0)

   int get()  { 
	   return g; 
   } //

   int next() { 
	   g += f; 
	   f = g - f; 
	   return g; 
   } //

   int prev() { 
	   f = g - f; 
	   g -= f; 
	   return g; 
   } //
};