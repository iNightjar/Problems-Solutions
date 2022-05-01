#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int A,B,C,D,x,y;
	cin>>A>>B>>C>>D;
  x = max(A,C);
   y = min(B,D);
	if ((y-x)<=0){
	cout<<0<<endl;}
	else cout<<y-x<<endl;
}
