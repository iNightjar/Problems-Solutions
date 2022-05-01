#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
int n,x,trick; 
cin>>n;
x=n/15;
trick=floor(x);
cout<<(n*800)-(trick*200);
return 0;
}
