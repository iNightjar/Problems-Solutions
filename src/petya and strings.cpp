#include <bits/stdc++.h>
#include <string>
using namespace std;
int main ()
{
    string s1,s2;
    cin>>s1>>s2;
    for (int i=0;i<s1.size();i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    int n=s1.compare(s2);
    if (n==0)
        printf ("0\n");
        else if (n>0)
        printf ("1\n");
        else printf ("-1\n");
        return 0;
}
