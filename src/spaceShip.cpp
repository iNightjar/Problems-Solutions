#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,t;
    string s;
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>a>>b;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
        switch(s[i]){
        case 'U' : cnt1++; break;
        case 'D' : cnt2--; break;
        case 'R' : cnt3++; break;
        case 'L' : cnt4--; break;
        }}
            if (a>= 0 && b >=0  )
            {if (a<=cnt3 && b <=cnt1)
                            cout<<"YES"<<endl;
                        else cout<<"NO"<<endl;}
        else if (a>= 0 && b < 0 )
            {if (a<=cnt3 && b >=cnt2)
                            cout<<"YES"<<endl;
                        else cout<<"NO"<<endl;}
        else if (a < 0 && b >= 0)
        {if (a>=cnt4 && b <= cnt1)
                            cout<<"YES"<<endl;
                        else cout<<"NO"<<endl;}
        else{
            if (a>=cnt4 && b >= cnt2)
                            cout<<"YES"<<endl;
                        else cout<<"NO"<<endl;
            }
        cnt1=0;cnt2=0,cnt3=0,cnt4=0;
    }
}
