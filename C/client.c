#include <stdio.h>
#include "lib_static.h"

int main()
{
	int n1 = 5, n2 = 8 ;
	int f1, f2 ;
	f1 = factorial ( n1 ) ;
	f2 = factorial ( n2 ) ;
	printf ( "f1 = %d f2 = %d", f1, f2 ) ;
	return 0;
}