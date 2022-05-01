#include <bits/stdc++.h>
#include <string>
 
using namespace std ;
 
int main ( )
{
	string x , y;
	cin >> x >> y ;
    bool flag=0;
	if  (x.size() > y.size())
	{
		cout << "GREATER\n" ;
	}
	else if (x.size()==y.size() )
	{
		for (int i =0;i<x.size();i++)
		{
			if (x[i]>y[i])
			{
				cout << "GREATER\n" ;
				flag=1;
				break ;
 
			}
			else if (x[i] <y[i])
			{
				cout <<"LESS\n" ;
				flag=1;
				break ;
			}
		}
		if(flag==0)
            cout << "EQUAL\n" ;
 
	}
	else if (x.size()<y.size() )
	cout << "LESS\n" ;
	else
			cout << "EQUAL\n" ;
 
		return 0 ;
}
