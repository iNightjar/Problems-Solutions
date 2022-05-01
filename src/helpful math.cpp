#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,j;
    char swp;
    string s;
    cin>>s;
    n= s.length();
    for (int i=0;i<n;i++)
    {
        for (int j=i+2;j<n;j+=2)
        {
            if (s[i]>s[j])
        {
                swp = s[i];
                s[i]= s[j];
                s[j]= swp;
        }
    }
    }
    cout<<s<<endl;
}
