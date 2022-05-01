#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    int bird[100];
    scanf ("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",bird+i);
    }
    int m,x,y;
    scanf ("%d",&m);
    for (int i=0;i<m;i++)
    {
        scanf ("%d%d",&x,&y);
        --x;
        if (x!=0)
            bird[x-1] +=  y-1;
        if (x != n-1)
            bird[x+1] += bird[x]-y;
        bird[x] = 0;
    }
    for (int i=0;i<n;i++)
        printf ("%d\n",bird[i]);
    return 0;
}
