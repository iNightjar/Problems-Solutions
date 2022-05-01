#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main ()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int x= max(a,c);
	int y=min(b,d);
	if ((y-x)==true)
	cout<<y-x<<endl;
	else cout<<0<<endl;
}
