#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n , d;
    cin >>n>>d;
    if (n>=1&&n<=100&&d>=1&&d<=10000)
    {
        int t[n],sum=0;
        for (int i=1;i<=n;i++)
        {
            cin>>t[i];
            sum += t[i];
        }
        if ((d-sum)%5==0)
            cout<<((d-sum)/5)<<endl;
        else cout<<-1<<endl;
    }
    else ;
}
