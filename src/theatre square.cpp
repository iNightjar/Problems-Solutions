#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,a;
    long long h,w;
    scanf ("%d%d%d",&n,&m,&a);
    h = n/a;
    if (n%a != 0)
        h++;
    w = m/a;
    if (m%a != 0)
        w++;
    printf ("%lld\n",h*w);
    return  0;
}
