#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,c;
    while (cin>>n>>m>>c && n !=0)
    {
        int remainder = c == 1 ? 1 : 0;
        cout<< ((n-7)* (m-7)+remainder )/2<<endl;
    }
    return 0;
}
