#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,x,y,cnt=1;
    scanf ("%d%d",&n,&x);
    y=x;
    for (int i=1;i<n;i++)
    {
        scanf ("%d",&x);
        if (y!=x)
        {
            cnt++;
            y=x;
        }
    }
    printf ("%d\n",cnt);
}
