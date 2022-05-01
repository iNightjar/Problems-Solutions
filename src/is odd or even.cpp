#include <bits/stdc++.h>
using namespace std;
bool checkEvenOdd(int num){
   bool b;
   if (num % 2 == 0)
      b=true;
   else
      b=false;
   return b;
}
int main(){
   int num;
   bool isEven;
   cin>>num;
   isEven = checkEvenOdd(num);
   if(isEven)// even
      cout<<"100"<<endl;
   else // odd
      cout<<"7"<<endl;
   return 0;
}
