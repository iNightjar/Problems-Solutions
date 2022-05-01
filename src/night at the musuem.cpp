#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int moves=0,walk=0,index,start=0;
    for (int i=0;i<s.size();i++)
    {
        index = s[i]-97;
        walk = abs(start-index);
        if (walk <13)
        {
            moves += walk;
        }
        else {moves += 26-walk;}
        start = index;
    }
    printf ("%d\n",moves);
    return 0;
}
