#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,b,v,t,cnt=0;
    scanf ("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf ("%d%d%d",&b,&v,&t);
        if ((b+v+t)>=2)
            cnt++;
    }
    printf ("%d\n",cnt);
}
