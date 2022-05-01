#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main ()
{
    unsigned int n,sq;
    while (cin>>n &&n != 0)
    {
        sq = (int)sqrt(n);
        cout<<( sq*sq == n ? "yes\n" : "no\n" );
    }
    return 0;
}
