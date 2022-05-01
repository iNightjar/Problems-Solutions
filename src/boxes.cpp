#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,a,b,x,sum=0;
    cin>>n>>m;
    int arr[m+1]={0};
    while (n--)
    {
        cin>>a>>b;
        if (arr[b]<=a)
       {
           arr[b]=a;
       }
    }
    for (int i=0;i<m+1;i++)
    {sum +=arr[i];}
    cout<<sum<<endl;
}
