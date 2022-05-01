#include <stdio.h>
using namespace std;
int main()
{
    long long a,b,x;
    //long long c;
    scanf ("%lld%lld%lld",&a,&b,&x);
    for (long long i=a;i<=b;i++)
    if (b%x==0){
            //c=b/x;
    printf ("%lld\n",b/x);}
    else printf ("%d",0);
}
