#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,h,a,cnt=0;
    scanf ("%d%d",&n,&h);
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&a);
        if (a<=h)
            cnt +=1;
        else cnt +=2;
    }
    printf ("%d\n",cnt);
}
