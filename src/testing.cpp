#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,x;
    scanf ("%D",&n);
    int a[101];
    for (int i=1;i<=n;i++)
    {
        scanf ("%d",&x);
        a[x]=i;
    }
    for (int j=1;j<=n;j++)
        cout<<a[j]<<" ";
}
