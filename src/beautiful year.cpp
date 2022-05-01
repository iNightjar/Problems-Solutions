#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int y,a,s,m,n,l,cnt=0;
    cin>>y;
    if (y>=1000)
    {
        for (l=y;l++;){
        a = l%10;
        s = (l%100)/10;
        m = (l/100)%10;
        n = l/1000;
        cnt +=1;
        if (a!=s && a!=m&& a!=n&& s!=m&& s!=n&& m!=n)
            break;
     }
      cout<<l<<"\n";
    }
     else ;
}
