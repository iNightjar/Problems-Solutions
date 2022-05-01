#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int n,m,l,b;
  scanf ("%d",&n);
  m = n/3;
  if (m%3==0)
    m = n/3+1;
    l = (n-m)/2;
    if (l%3==0)
        l = ((n-m)/2)+1;
    b =(n-m)-l;
    if (b%3==0)
    l = ((n-m)/2)+2;
        b =n-(m+l);
    printf ("%d %d %d\n",m,b,l);
}
