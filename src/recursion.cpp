#include <bits/stdc++.h>
using namespace  std;
int cnt=0;
int countnum(int num)
{
    if (num!=0)
    {
        cnt++;
        countnum(num/10);
    }
    return cnt;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    cout<<countnum(num)<<endl;
    return 0;
}
