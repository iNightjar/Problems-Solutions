#include <stdio.h>
using namespace std;
int main ()
{
	int n;
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	if  (i==n)
	{
	if (i%2==0)		
	printf ("I love it\n");
	else printf ("I hate it\n");
	}
	else if (i%2==0)
	printf ("I love that ");
	else printf ("I hate that ");
}
