#include <bits/stdc++.h>
using namespace std;
int main  ()
{
    int n, cnt1=0,cnt2=0,mn=1000000009,mx=0;
    scanf ("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
        mx = max(mx,a[i]);
        mn = min(mn,a[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (a[i]==mx)
            cnt1++;
        if (a[i]==mn)
        cnt2++;
    }
    if (mn==mx)
        printf("0\n");
    else
    printf ("%d\n",n-cnt1-cnt2);
    return 0;
}
