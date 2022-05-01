#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main ()
{
	string s;
	int x;
	cin>>s;
		
  x =s.find_last_of("Z")-s.find("A")+1;
		
	cout<<x<<endl;
}
	
