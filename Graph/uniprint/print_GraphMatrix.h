
#pragma once

template <typename Tv, typename Te>
void UniPrint::p ( GraphMatrix<Tv, Te>& s ) { 
	int inD = 0; 
	for ( int i = 0; i < s.n; i++ ) 
		inD += s.inDegree ( i );
	int outD = 0; 
	for ( int i = 0; i < s.n; i++ )
		outD += s.outDegree ( i );
	printf ( "%s[%d]*(%d, %d):\n", typeid ( s ).name(), &s, s.n, s.e ); 

	print ( s.n ); 
	printf( " " ); 
	print ( inD );
	printf( "|" );
	for ( int i = 0; i < s.n; i++ ) { 
		print ( s.vertex ( i ) ); 
		printf( "[" ); 
		print ( s.status ( i ) );
		printf( "] " ); 
	}
	printf ( "\n" );


	print ( outD ); 
	printf ( " " ); 
	print ( s.e ); 
	printf ( "|" );
	for ( int i = 0; i < s.n; i++ ) { 
		print ( s.inDegree ( i ) ); 
		printf ( " " ); 
	}
	printf ( "| dTime fTime Parent Weight\n" );
   printf ( "-----------+" ); 
   for ( int i = 0; i < s.n; i++ ) 
	   printf ( "------" );
   printf ( "+----------------------------\n" );

   for ( int i = 0; i < s.n; i++ ) {
	   print ( s.vertex ( i ) ); 
	   printf( "[" );
	   print ( s.status ( i ) ); 
	   printf ( "] " ); 
	   print ( s.outDegree ( i ) ); 
	   printf ( "|" );
       for ( int j = 0; j < s.n; j++ )
		   if ( s.exists( i, j ) ) { 
				print ( s.edge ( i, j ) );
				print ( s.type ( i, j ) ); 
		   }
		   else 
			   printf ( "     ." );
		printf ( "| " ); 
		print ( s.dTime ( i ) ); 
		printf ( " " ); 
		print ( s.fTime ( i ) );
		printf ( "     " ); 
		if ( 0 > s.parent ( i ) )
			print ( "^" ); 
		else 
			print ( s.vertex ( s.parent ( i ) ) );
		printf ( "  " ); 
		if ( INT_MAX > s.priority ( i ) ) 
			print ( s.priority ( i ) ); 
		else 
			print ( " INF" );
		printf ( "\n" );
	}
	printf ( "\n" );
}