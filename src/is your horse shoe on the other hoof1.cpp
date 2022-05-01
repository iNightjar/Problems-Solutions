#include <bits/stdc++.h>
#include <set>
using namespace std;
int main ()
{
    set <long long int >s;
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    s.insert(a);s.insert(b);s.insert(c);s.insert(d);
    cout<<4-s.size()<<endl;
    return 0;
}
