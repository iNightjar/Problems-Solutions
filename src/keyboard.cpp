#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char n;
    string s;
    char key[30] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    cin>>n;
    cin>>s;
    for (int i=0;i<s.size();i++)
    {
        for (int j=0;j<30;j++)
        {
            if (s[i]==key[j])
            {
                if (n=='R')
                {
                    s[i]= key[j-1];
                }
                if (n=='L')
                {j++;
                    s[i] = key[j];
                }
            }
        }
    }
    cout<<s<<endl;
}
