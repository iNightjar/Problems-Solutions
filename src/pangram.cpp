#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    int n,a[26]={0};
    cin>>n>>s;
    for (int i=0;i<s.size();i++)
    {
        char c =s[i];
        if (c>'Z')
        a[c-'a']++;
        else
            a[c-'A']++;
    }
    for (int i=0;i<26;i++)
    {
        if (a[i]<=0)
        {
            printf ("NO\n");
        return 0;
    }
    }
    printf ("YES\n");
    return 0;
}

