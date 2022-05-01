#include <bits/stdc++.h>
using namespace std;
int a[26];
int main ()
{
    int n,check=0;
    string s;
    cin>>n>>s;
    for (int i=0;i<n;i++)
    {
        s[i] = tolower(s[i]);
        a[s[i]-'a']++;
    }
    for (int j=0;j<26;j++)
    {
        if (a[j]< 1 )
        {
            check =1;
            break;
        }
    }

    if (check==1)
        printf ("NO\n");
    else
        printf ("YES\n");
}
