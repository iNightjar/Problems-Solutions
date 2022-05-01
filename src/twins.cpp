#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,sum=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        sum +=a[i];
    }
    int nsum=0;
    sort (a,a+n,greater<int>());
    for (int i=0;i<n;i++)
    {
        nsum += a[i];
        if (nsum>(sum-nsum))
            {
                cout<<i+1<<endl;
                break;
            }
        }
}

