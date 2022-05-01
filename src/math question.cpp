#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,r,c;
    long long s1=0,s2=0,result=0;
    scanf ("%d",&n);
    int m[n][n];
    for ( r=0;r<n;r++)
        for (c=0;c<n;c++)
    {
        scanf ("%d",&m[r][c]);
        if (r==c)
        {
            s1 += m[r][c];
        }
   }
    for (r=0,c=n-1;r<n,c>=0;r++,c--)
    {
        s2 += m[r][c];
    }
    //cout<<s1<<"  "<<s2<<endl;
    result = s1*s2;
    cout<<result<<endl;
}
