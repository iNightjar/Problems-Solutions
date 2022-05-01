#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    long long a,b;
    int x;
    scanf ("%lld%lld%d",&a,&b,&x);
    int result = (b/x)-((a-1)/x);
    cout<<result<<"\n";
    return 0;
}
   
