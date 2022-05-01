#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main ()
{
    int c=0,a=0;
    string s;
    cin>>s;
    for (int i=0;i<s.size();++i)
    {
        if (s[i]==toupper(s[i]))
            c++;
        else a++;
    }
    for (int i=0;i<s.size();++i)
    if (c>a)
    {
    s[i]=toupper(s[i]);
    cout<<s[i];
    }
    else
    {
    s[i]=tolower(s[i]);
    cout<<s[i];
    }
}
