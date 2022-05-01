#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long n;
    int cnt=0;
    scanf ("%lld",&n);
    if (n>=1){
    for (long long i=n;i>=1;i--)
    {
        if (i%13==0&& i%11==0&& i%12==0&& i%6==0&&  i%1==0&& i%2==0&& i%10==0)
            cnt ++;
    }
    printf ("%d\n",cnt);
}
else ;
}
