#include <bits/stdc++.h>
using namespace std;
int main(){
    int s;
    string given,out;
     cin>>s>>given;
     for(int i=0;i<s;i++){
      if((s-i)%2)
        out=out+given[i];
      else out=given[i]+out;
     }
     cout<<out<<endl;
}
