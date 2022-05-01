#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k;
    char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char pass[100];
    cin>>n>>k;
    for (int i=0;i<k;i++)
    {
        pass[i]=alpha[i];
    }
    for (int i=0,s=1;i<n;i++,s++)
    {
        if (i==k)
        {
            i = i-k;
        }
        cout<<pass[i];
    if (s==n)
    {
        break;
    }
    }
    return 0;
}
