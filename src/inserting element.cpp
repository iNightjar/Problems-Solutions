// inserting a new element into a sorted array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7] = {3,6,9,15,0,0,0};
    int nw_element = 12 , num_element = 4 , j=0;
    for (;j<num_element;j++)
        if (nw_element < arr[j])
            break;
    for (int k =num_element;k>j;k--)
        arr[k] = arr[k-1]; // i get it, yah
    arr[j] = nw_element;
    num_element++;
    for (int i=0;i<7;i++)
        cout<<arr[i]<<" | ";
        cout<<endl;
        cout<<num_element<<endl;
}
