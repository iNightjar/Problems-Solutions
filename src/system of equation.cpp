#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int m,n,cnt=0;
    scanf("%d%d",&n,&m);
    if (m>n)
        swap (m,n);
    for (int i=0;i<=n;i++)
        for (int j=0;j<=n;j++)
        if (i*i+j==n&&j*j+i==m)
        cnt++;
    printf ("%d\n",cnt);
}
