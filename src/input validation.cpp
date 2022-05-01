#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num1,num2;
    cout<<"enter two integer numbers to get thier sum"<<endl;
    cin>>num1>>num2;
    if (cin.fail())
    {
        cout<<"invalid input Got one more trial"<<endl;
        cin.clear();
        cin.ignore(10000,'\n');
        cin>>num1>>num2;
        if (cin.fail())
            cout<<" ooh you idiot bye bye"<<endl;
        else
            cout<<"the sum is: "<<num1+num2<<endl;
    }
    else
            cout<<"the sum is: "<<num1+num2<<endl;
}
