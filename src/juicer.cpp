#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,size,limit,wasted=0,sum=0;
    scanf ("%d%d%d",&n,&size,&limit);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
        if (a[i]<=size)
            sum += a[i];
        if (sum>limit)
        {
            wasted ++;
            sum = 0;
        }
    }
    printf ("%d\n",wasted);
    return 0;
}
