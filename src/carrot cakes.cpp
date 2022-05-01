#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int needed,t,k,d;
    cin>>needed>>t>>k>>d;
    int a=0,sum=0;
    while (true)
    {
        a +=k;
        sum +=t;
        if (a>=needed)
            break;
    }
    if ((d+t)<sum)
        printf ("YES\n");
    else printf ("NO\n");
}
