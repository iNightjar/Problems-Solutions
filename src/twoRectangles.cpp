#include <iostream>
using namespace std;
int main ()
{
    short A=1,B=1,C=1,D=1;
    cin>>A>>B>>C>>D;
    if ((A*B) == (C*D))
        cout<<(A*B)<<"\n";
    else if ((A*B)>(C*D))
        cout<<(A*B)<<"\n";
    else cout<<(C*D)<<"\n";
    return 0;
}
