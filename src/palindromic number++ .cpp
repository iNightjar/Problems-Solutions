#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,m,b,x;
	scanf ("%d",&n);
	if (n>=100 &&n<=999)
	{
	m = n%10;
	b =n/10;
	x = b/10;
	if (m ==x )
	printf ("Yes\n");
	else printf ("No\n");
}
else cout <<"ERRoR\n";
}
