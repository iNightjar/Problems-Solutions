#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a,b;
	scanf ("%d%d",&a,&b);
	if ((a+b)>=24)
	{
		printf ("%d\n",(a+b)-24);
	}
	else if ((a+b)<24&&(a+b>=0))
	{
		printf ("%d\n",a+b);
	}
	else;
}
