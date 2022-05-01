#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,cnt=0;
    long long a,b,temp=0,temp1=0;
    cin>>n;
    cin>>a>>b;
    temp=b;
    temp1=a;
    for (int i=0;i<n-1;i++)
    {
        cin>>a>>b;
        if (b<temp)
        {
            if (temp1<a)
            {
            cnt++;
            }
        }
        else {
            temp = b;
            temp1 = a;
        }
    }
    cout<<cnt<<endl;
}
