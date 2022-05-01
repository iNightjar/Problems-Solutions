#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,a,l;
    scanf ("%d",&n);
    if (n>=1&&n<=10^9)
    {
        for (a<=n;a>=1;a--)
        {
            if (a%2==0)
                break;
    }
      l=n-a;
        if (l%2==0)
            printf ("Mahmoud\n");
        else printf ("Ehab\n");
    }
    else ;
}
