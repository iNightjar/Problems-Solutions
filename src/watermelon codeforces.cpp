#include <stdio.h>
using namespace std;
 int main ()
 {
 	int W;
 	scanf ("%d",&W);
 	if (W>=1 && W<=100)
 	{
	 if (W%2==0 && W!=2)
	printf ("YES\n"); 
	else
 	printf ("NO\n");
	} 
}
