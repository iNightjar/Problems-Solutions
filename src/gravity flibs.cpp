#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    scanf("%d",&x);
    int arr[x];
    for (int i=0;i<x;i++)
        scanf ("%d",&arr[i]);
        sort (arr,arr+x);
    for (int i=0;i<x;i++)
        printf ("%d\n",arr[i]);
}
