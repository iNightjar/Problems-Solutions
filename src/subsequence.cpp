#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void subseq (int arr[],int n)
{
    unsigned int opsize = pow(2,n);
    for (int counter=1;counter<opsize;counter++)
    {
        for (int j=0;j<n;j++)
        {
            if (counter & (1<<j))
                cout<<arr[j]<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    //int arr[] = {1,2,3,4};
    //int n = sizeof(arr)/sizeof(arr[0]);
        subseq(arr,n);
        return 0;
}
