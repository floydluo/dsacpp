/*DSA*/  
for ( Rank i = 0, j = 0, k = 0; j < lb; ) { //将B[j]和C[k]中的小者续至A末尾
   if ( ( k < lc ) &&                ( C[k] <  B[j] )   ) A[i++] = C[k++];
   if (               ( lc <= k ) || ( B[j] <= C[k] )   ) A[i++] = B[j++];
}
/*DSA*/  //交换循环体内两句的次序，删除冗余逻辑
