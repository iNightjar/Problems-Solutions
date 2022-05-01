#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d;
    scanf ("%d%d%d%d",&a,&b,&c,&d);
    int cnt=0;
    if (a==b || a==c || a==d)
        cnt++;
    if (b==c || b==d)
        cnt++;
    if (c==d)
        cnt++;
    printf ("%d\n",cnt);
}
