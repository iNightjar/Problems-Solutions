#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,x=0;
    scanf ("%d",&a);
    string b;
    for (int i=0;i<a;++i)
    {
     cin>>b;
     if (b[0]=='+')
            x++;
    if (b[0]=='-')
        x--;
    if (b[2]=='+')
        x++;
    if (b[2]=='-')
        x--;
    }
    printf ("%d\n",x);
}
