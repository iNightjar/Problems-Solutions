#include <stdio.h>
#include <iostream>
using namespace std ;

int main ( )
{
	long long  a , b ,x ;
    scanf("%lld%lld%lld" ,&a,&b,&x);


	if ( a%x ==0  )

	cout <<  ((b/x) - ((a)/x) ) +1 ;
	else
	cout << (b/x) - ((a)/x) ;
	return 0 ;
}

