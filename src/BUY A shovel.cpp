#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int sh,cn,sum=1;
    scanf ("%d%d",&sh,&cn);
    while (true)
    {
        if ((sh*sum)%10==0 || (sh*sum)%10==cn)
        {
            printf ("%d\n",sum);
            break;
        }
        sum++;
    }
}
