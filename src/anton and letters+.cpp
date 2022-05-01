#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char ss;
    set <char> s;
    while ((ss=getchar())!='\n')
    {
        if (ss>='a'&&ss<='z')
        {
            s.insert(ss);
        }
    }
    cout<<s.size()<<endl;
}
