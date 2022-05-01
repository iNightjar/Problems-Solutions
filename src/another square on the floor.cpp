#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,x,y;
    long long sum=0;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        sum = max(x,y);
        printf ("%lld\n",sum*sum);
    }
    return 0;
}
