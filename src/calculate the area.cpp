#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a=1,s=1;
    scanf ("%d",&n);
    for (int i=1;i<n;i++)
      {
          if (n%i==0)
        {
            a= i;
            s= n/i;
        }
    }
    printf ("%d %d\n",a,s);
}
