#include <bits/stdc++.h>
using namespace std;
int main ()
{
   int n,m,a,d,x=0;
   scanf ("%d%d%D%D",&n,&m,&a,&d);
   int cnt[m];
   for (int i=n;i<=m;i++)
   {
       if (i%a!= 0 )
       {
           cnt[x] = i;
           x++;
       }
       else if (i % (a+d)!= 0)
       {
           cnt[x] = i;
           x++;
       }
        else if (i % (a+2*d)!= 0)
        {
            cnt [x] = i;
            x ++;
        }
        else if (i % (a+3*d)!= 0)
        {
            cnt[x] = i;
            x++;
        }
        else if (i % (a+4*d)!= 0)
        {
            cnt[i] = i;
            x++;
        }
   }
   for (int i=0;i<x;i++)
    cout<<cnt[i];
    return 0;
}
