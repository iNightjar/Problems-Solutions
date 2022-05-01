#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin >> a >> b;
    int c=1,j=0;

    for(int i=0;i<b.size();i++)
    {
        if(b[i]==a[j])
        {
            c++;
            j++;
        }
    }

    cout << c << endl;

    return 0;
}
