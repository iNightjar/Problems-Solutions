#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x,p,q,cnt=0;
    scanf ("%d",&x);
    for (int i=0;i<x;i++)
    {
        scanf ("%d%d",&p,&q);
     if (q-p >= 2)
        cnt++;
    }
        printf ("%d\n",cnt);
}
