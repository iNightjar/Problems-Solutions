#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,cnt=0;
    scanf("%d",&n);
    int a[n],s[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d%d",a+i,s+i);
    }
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
        if (a[i]==s[j])
            cnt++;
        printf ("%d\n",cnt);
}
