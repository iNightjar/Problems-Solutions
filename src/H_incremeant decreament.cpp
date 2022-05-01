#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0, max=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='I')
        {
            x++;
            if(x>max)
            max=x;
 
        }
        else if(s[i]=='D')
        {
            x--;
        }
    }
    cout<<max<<endl;
    return 0;
}
