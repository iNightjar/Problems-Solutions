#include <bits/stdc++.h>
using namespace std;
int cnt;
int main ()
{
    string s;
    cin>>s;
    for (char i='a';i<='z';i++)
    {
        for (int j=0;j<s.length();j++)
        if (i == s[j] && cnt<s.length())
		    {
			  cnt += 1 ;
		      break ;
			}
    }
   // printf ("%d\n",cnt);
      if (cnt%2 == 0)
        cout<<"CHAT WITH HER!\n";
    else
        cout<<"IGNORE HIM!\n";
}
