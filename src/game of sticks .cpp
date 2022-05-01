#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y;
    scanf ("%d%d",&x,&y);
    if (x>y)
        swap (x,y);
    if (x%2==0)
        printf ("Malvika\n");
        else
    printf ("Akshat\n");
}
