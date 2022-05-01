#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y;
    scanf ("%d%d",&x,&y);
    string s[6]= {"1/6","1/3","1/2","2/3","5/6","1/1"};
    int c= max(x,y);
    cout<<s[6-c]<<endl;
    return 0;
}
