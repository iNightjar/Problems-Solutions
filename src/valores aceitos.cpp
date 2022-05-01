
//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int A,B,C,D;
	scanf ("%d%d%d%d",&A,&B,&C,&D);
	if (B>C && D>A && C+D>A+B && C>0 && D>0 && A%2==0)
	printf ("%s\n","Valores aceitos");
	else   printf ("%s\n","Valores nao aceitos");
}
