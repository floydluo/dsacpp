
#include <iostream> /*DSA*/
using namespace std;/*DSA*/

void shuffle ( int A[], int n ) { // random the elements in A[0, n)
   while ( 1 < n )
      swap ( A[rand() % n], A[--n] );
}

void shuffle ( int A[], int lo, int hi ) { // random the elements in A[lo, hi)
	shuffle ( A + lo, hi - lo );  
}
