#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k;
    scanf ("%d%d",&n,&k);
    int f,g,temp=-2000000000 ,temp1=-2000000000,re,result;
    for (int i=0;i<n;i++)
    {
        scanf ("%d%d",&f,&g);
        if (g>k)
        {
            re = f-(g-k);
            if (re>temp)
                temp = re;
        }
        else {
            if (f>temp1)
                temp1 = f;
        }
    }
    result = max(temp,temp1);
    printf ("%d\n",result);
}
