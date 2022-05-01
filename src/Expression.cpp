#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,x,z,y,m,n;
    scanf ("%d%d%d",&a,&b,&c);
    x = a+b*c;
    z = a*(b+c);
    y = a*b*c;
    m = (a+b)*c;
    n = a+b+c;
    if (x>=z&&x>=y&&x>=m&&x>=n)
        printf("%d\n",x);
    else if (z>=x&&z>=y&&z>=m&&z>=n)
        printf("%d\n",z);
    else if (y>=x&&y>=z&&y>=m&&y>=n)
        printf("%d\n",y);
        else if (m>=x&&m>=z&&m>=y&&m>=n)
            printf("%d\n",m);
    else printf("%d\n",n);
}
