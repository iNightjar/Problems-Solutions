#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double num1=0.0,num2=0.0;
    int choice =0;
    cout<<"\t\t\t\t******* Welcome to The Calculator *******\n\n\n\n";
    cout<<"Please Enter two invalid numbers"<<endl;
        cin>>num1>>num2;
        if (cin.fail())
    {
        cin.clear();
        cin.ignore(10000,'\n');
        cout<<"Error,Please Enter two invalid numbers"<<endl;
    }
    cout<<"press 1 for the ( + ) operation "<<endl;
    cout<<"press 2 for the ( - ) operation "<<endl;
    cout<<"press 3 for the ( * ) operation "<<endl;
    cout<<"press 4 for the ( / ) operation "<<endl;
    cout<<"press 5 To Renter two numbers again "<<endl;
        cin>>choice;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(10000,'\n');
        cout<<"Error,Please Enter invalid number"<<endl;
    }
    if (choice==1)
    {
        cout<<"The result of "<<num1<<" + "<<num2<<" is "<<num1+num2<<endl;
    }
    else if (choice ==2)
    {
        cout<<"The result of "<<num1<<" - "<<num2<<" is "<<num1-num2<<endl;
    }
    else if (choice ==3 )
    {
        cout<<"The result of "<<num1<<" * "<<num2<<" is "<<num1*num2<<endl;
    }
    else if (choice ==4 )
    {
        if (num2 == 0)
        cout<<" Sorry , Can't divide by zero "<<endl;
        else
            cout<<"The result of "<<num1<<" / "<<num2<<" is "<<num1/num2<<endl;
    }
    else {
        cout<<" Please Enter integer number from 1 to 4 "<<endl;
    }
    return 0;

}
