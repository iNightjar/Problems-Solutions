#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
string str[2];
for(int i=0;i<2;++i) //input
getline(cin,str[i]);
for(int i=0;i<2;++i) //prints each string
cout<<str[i]<<endl;
for(int i=0;i<2;++i) //printing char by char
for(int j=0;j<(int)str[i].length();++j){
cout<<str[i][j]<<endl;

}
}
