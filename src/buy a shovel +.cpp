#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int k,r;
    scanf ("%d%d",&k,&r);
    for (int i=1;i<10;i++)
    {
        if ((k*i)%10==0 || (k*i)%10==r)
        {
            printf ("%d\n",i);
            break;
        }
    }
}
