#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main ()
{
    int n,mn=0,mx=0;
    scanf ("%d",&n);
    long a[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%ld",&a[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (i==0)
            mn = abs(a[1]- a[i]);
            else if (i== n-1)
                mn = abs(a[n-2]-a[n-1]);
            else if (abs(a[i]-a[i-1])>abs(a[i+1]-a[i]))
                mn = abs(a[i+1]-a[i]);
            else
                mn = abs(a[i]-a[i-1]);
            if (abs(a[n-1]-a[i])>abs(a[i]-a[0]))
                mx = abs(a[n-1]-a[i]);
                else
                    mx = abs(a[i]-a[0]);
            printf ("%d  %d\n",mn,mx);
    }
    return 0;

}
