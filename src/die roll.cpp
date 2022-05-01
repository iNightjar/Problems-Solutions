#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y;
    scanf ("%d%d",&x,&y);
    int c =7- max(x,y);
    if (c==1)
        printf ("1/6\n");
    if (c==2)
        printf ("1/3\n");
    if (c==3)
        printf ("1/2\n");
    if (c==4)
        printf ("2/3\n");
    if (c==5)
        printf ("5/6\n");
        if (c==6)
            printf ("1/1\n");
        return 0;
}
