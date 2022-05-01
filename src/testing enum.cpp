#include <bits/stdc++.h>
using namespace std;
int main ()
{
    enum Gender {male,female};
    Gender gender = male;
    switch (gender)
    {
        case male :
        cout<<"gender is male"<<endl;
        break;
    case female :
        cout<<"gender is female"<<endl;
        break;
    default :
        cout<<"value can be male or female"<<endl;
    }
    return 0;
}
