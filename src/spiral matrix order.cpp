#include <bits/stdc++.h>
using namespace std;
const int n = 6;
enum dir      {right=0, down, left, up};   // spiral order
int dir_r[]  ={0      , 1   , 0  , -1};
int dir_c[]  ={1      , 0   , -1  , 0};

void spiral(int arr[n][n] , int n)
{
    cout<<"case N = "<<n<<" :  ";
    int cnt =0 , r =0 , c =0 , steps = n , dir =0 ;
    while (cnt < n*n )
    {
        for (int s=0 ; s<4 && cnt < n*n ; s++)
        {
            int m= steps -1 ;
            if ( s == 3)    -- m;
            for (int i=0;i<m && cnt <  n*n ; i++)
            {
                cout<<arr[r][c]<<"  ";
                ++cnt , r += dir_r[dir], c+= dir_c[dir];
            }
            dir = (dir +1)%4;  // direcion swithing.
        }
        cout<<arr[r][c]<<"  ";
        ++cnt , r += dir_r[dir], c+= dir_c[dir];
        steps -=2;
    }
    cout<<endl;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[n][n] = {
                    {1,2,3,4,5,6},
                    {7,8,9,10,11,12},
                    {13,14,15,16,17,18},
                    {19,20,21,22,23,24},
                    {25,26,27,28,29,30},
                    {31,32,33,34,35,36}  };
    spiral(arr,2);
    return 0;
}
