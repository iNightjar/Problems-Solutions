#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    int sereja=0,dima=0,l=0,r=n-1;
    int cards[n];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf ("%d",cards+i);
    }
    for (int i=0;i<n;i++)
    {
        if (cards[l]>cards[r])
        {
        if (i%2==0)    sereja += cards[l];
        else dima += cards[l];
            l++;
        }
        else
        {
            if (i%2==0)
            sereja +=cards[r];
            else dima +=cards[r];
            r--;
        }
    }
    printf ("%d  %d",sereja,dima);
}
