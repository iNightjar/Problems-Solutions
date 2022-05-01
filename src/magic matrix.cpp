#include <bits/stdc++.h>
using namespace std;
const int n = 3;
int sumrow(int i ,int square[n][n])
{
    int sum =0;
    for (int j=0;j<n;j++)
        sum += square[i][j];    return sum;
}
int sumcol(int j , int square[n][n])
{
    int sum =0;
    for (int i=0;i<n;i++)
        sum += square[i][j];    return sum ;
}
int diagonal(int square[n][n])
{
    int sum =0,pos=0;
    for (int i=0;i<n;i++)
        {sum += square[pos][pos];    pos++;}
        return sum ;
}
int antidiagonal(int square[n][n])
{
    int sum =0,pos=0;
    for (int i=0;i<n;i++)
        {
            sum += square[pos][n-pos-1];    pos++;}
            return sum ;
}
bool validate(int square[n][n])
{
    int val = sumrow(0,square);
    for (int i=0;i<n;i++)
    {
        if(val != sumrow(i,square))  return false ;
        if (val != sumcol (i, square))  return false;
    }
    if (val!= diagonal(square))     return false;
    if (val!= antidiagonal(square))     return false;
    return true ;
}
int main ()
{
    int square[n][n] ={ {8,1,6},
                        {3,5,7},
                        {4,9,2} };
    if (validate(square))           cout<<"valid"<<endl;
    else                            cout<<"invalid"<<endl;
   /* square[0][0]++;
    if (validate(square))           cout<<"valid"<<endl;
    else                            cout<<"invalid"<<endl;*/
    return 0;
}
