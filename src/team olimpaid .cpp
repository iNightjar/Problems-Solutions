#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,x=0,y=0,z=0,w,q,t1[5000],t2[5000],t3[5000];
    scanf ("%d",&n);
    int s[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&s[i]);
        if (s[i]==1)
        {
            t1[x]=i+1;
            x++;
        }
        else if (s[i]==2)
        {
            t2[y]=i+1;
            y++;
        }
        else {
                t3[z]=i+1;
                z++;
        }
    }
    q = min(x,y);
    w = min (q,z);
    printf ("%d\n",w);
    for (x=0,y=0,z=0;x<w,y<w,z<w;x++,y++,z++)
        {
            printf ("%d  %d  %d\n",t1[x],t2[y],t3[z]);
        }
    return 0;
}
