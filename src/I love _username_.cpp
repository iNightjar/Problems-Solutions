#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int cnt=0,highest,tester,lowest,n;
    scanf ("%d",&n);
    scanf ("%d",&tester);
    lowest=highest=tester;
    for (int i=1;i<n;++i)
    {
        scanf ("%d",&tester);
        if (tester>highest)
        {
            cnt++;
            highest=tester;
        }
        else if (tester<lowest)
        {
            cnt++;
            lowest=tester;
        }
    }
    printf("%d\n",cnt);
}
