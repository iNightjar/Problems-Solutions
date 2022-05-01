#include <bits/stdc++.h>
using namespace std;
int main ()
{
   string s;
   int cnt=0;
   char vowles[]={'a','e','u','o','y','i'};
   cin>>s;
   for (int i=0;i<s.size();i++)
   {
       if (isupper(s[i]))
        s[i]=tolower(s[i]);
   }
   for (int i=0;i<s.size();i++)
    for (int j=0;j<6;j++)
