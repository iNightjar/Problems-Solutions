#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,temp1,temp,cnt=0;
    scanf("%d",&n);
    char row[n];
    for (int i=0;i<n;i++)
    {
        cin>>row[i];
    }
    for (int i=0;i<n;i++)
    {
        if (i%2==0)
        {temp= row[i];}
        else {temp1=row[i];}
        if (temp==temp1)
            cnt++;
    }
    printf ("%d\n",cnt);
}
