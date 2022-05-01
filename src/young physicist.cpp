#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,x,z,y,sumx=0,sumy=0,sumz=0;
    scanf ("%d",&n);
    for (int i=0;i<n;i++)
    {
    scanf ("%d%d%d",&x,&y,&z);
    sumx +=x;
    sumy +=y;
    sumz +=z;
    }
    //printf ("%d%d%d",sumx,sumy,sumz);
    if (sumx==0&&sumy==0&&sumz==0)
        printf ("YES\n");
    else printf ("NO\n");
    return 0;
}
