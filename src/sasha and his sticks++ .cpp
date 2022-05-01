#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    long long  n,k;
    int l,cnt=0;
    scanf ("%lld%lld",&n,&k);
    while (l>=-1)
    {
    l -= n-k;
    cnt++;
    }
    if (cnt%2 ==0)
        printf ("No\n");
    else
        printf ("Yes\n");
}
