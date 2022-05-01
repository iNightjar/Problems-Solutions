#include <bits/stdc++.h>
using namespace std;
int a[] = {1,2,3,5,6,8,6,2,9,10};
int n;
void q1()
{
    if (n==10)
        return ;
    if (a[n]==4)
    {
        n+=1;
        //q1();
    }
}
int main ()
{
    q1();
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
