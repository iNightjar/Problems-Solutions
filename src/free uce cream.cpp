#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,c=0;
    long long x,d;
    char y;
    scanf ("%d%lld",&n,&x);
    for (int i=0;i<n;i++)
    {
        cin>>y>>d;
        if (y=='-')
        {
            if (x>=d)
                x -=d;
            else c++;
        }
        else if (y=='+')
            x +=d;
    }
    printf ("%lld %d\n",x,c);
}
