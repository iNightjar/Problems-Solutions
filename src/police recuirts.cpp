#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,evnt,sum=0,cnt=0;
    scanf ("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&evnt);
        if (evnt==-1)
        { if (sum>=1){sum +=evnt;}
            else cnt++;
        }
        else sum+=evnt;
    }
    printf ("%d\n",cnt);
}
