#include <bits/stdc++.h>
using namespace std;
string s;
int main ()
{
    int n,x=0,y=0;
    cin>>n>>s;
    for (int i=0;i<n;i++)
    {
        if (s[i]=='A')
            x++;
        else y++;
    }
    if (x>y)
    {
        cout<<"Anton\n";
    }
    else if (y>x)
    {
        cout<<"Danik\n";
    }
    else cout<<"Friendship\n";
}
