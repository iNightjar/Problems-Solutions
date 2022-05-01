#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,a;
    scanf ("%d",&t);
    for (int i=0;i<t;i++)
      {
          scanf ("%d",&a);
        if (a%2 == 0)
            printf ("specialist\n");
            else
                printf ("expert\n");
    }
}
