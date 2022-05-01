/*
*  NOW I'm using function to reduce time
*  and make the problem easy to solve
*/
#include <bits/stdc++.h>
using namespace std;
void func(int icount=0)
{
    for (int i=1;i<=100;++i)
    if ( i % 4 == 0 && i% 6 == 0 )
        icount++;
    cout<<"icount = "<<icount<<endl;
}
int sum_1_4(int sum =0)
{
    for (int i=1;i<=4;i++)
        sum +=i;
    return sum;
}
int multi_1_4 (int multi=1)
{
    for (int i=1;i<=4;i++)
        multi *= i;
        return multi;
}
double maximum(double num1 , double num2)
{
    if (num1>num2)
    return num1;
    return num2;
}
string attach(string first , string second)
{
    return "MR " + first + " " + second;
}
int maxi(int a,int b)
{
    return a>b ? a : b ;
}
double maxi(double a , double b)
{
    return a>b ? a : b ;
}
/*int factorial(int n)
{
        int ret =1;
        for (int i=1;i<=n;i++)
            ret *=i;
        return ret;
}*/
int factorial2(int n)
{
    if (n==1)
        return 1;
    return n * factorial2(n-1);
}
int  main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    func();
    cout<<sum_1_4()<<"   "<<multi_1_4()<<endl;
    cout<<maximum(5.4,5.5)<<endl;
    cout<<attach("james","bond")<<endl;
    cout<<maxi(4,5)<<endl;
    cout<<maxi(4.3,3.5)<<endl;
  //  cout<<factorial(3)<<endl;
    cout<<factorial2(100)<<endl;
    return 0;
}
