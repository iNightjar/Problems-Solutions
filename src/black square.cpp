#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d,cnt=0;
    scanf ("%d%d%d%d",&a,&b,&c,&d);
    string s;
    cin>>s;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]=='1')
            cnt +=a;
        if (s[i]=='2')
            cnt+=b;
        if (s[i]=='3')
            cnt+=c;
        if (s[i]=='4')
            cnt +=d;
    }
    printf ("%d\n",cnt);
}
