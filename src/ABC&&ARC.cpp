#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int X;
	scanf ("%d",&X);
	if (X>=1 && X<=3000)
	{
		if (X>=1200)
		printf ("ARC\n");
		else printf ("ABC\n");
	}
	return 0;
}
