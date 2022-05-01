#include <bits/stdc++.h>
#include <algorithm>
#include <assert.h>
using namespace std;
/*void get2ndmax()
{
    int size; cin>>size;
    int arr[size];
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    // attempt to find the second maximum number in array of elements .. let's try something up
    assert( size >= 2);

    int Fmaxi = arr[0] , Smaxi = arr[1];
    if (Smaxi > Fmaxi )
        swap(Smaxi,Fmaxi);
    for (int i=2;i<size;i++)
    {
        if (arr[i] > Fmaxi)
    {
        Smaxi  = Fmaxi ;
        Fmaxi = arr[i];
    }
    else if (arr[i] > Smaxi)
        Smaxi = arr [i] ;
        else ;
    }
    cout<<"\t\t"<<Smaxi<<endl;
}*/
/*void testing ()
{
    int size =10;
    int arr[10] ;
    for (int test =0;test<1000;test++)
    {
        // rand () is function used to choose random element in range [ 0 - ran_max= 32767 ]
        for (int i=0;i<size;i++)
            arr[i] = rand() % 100;
            int myanswer = get2ndmax(arr,size);
            sort (arr,arr+size) ;
            int correctanswer = arr[size-2] ;
            assert(correctanswer == myanswer) ;
    }
    cout<<" Perfect "<<endl;
}*/
/*void reverse_func (int arr[],int size)
{
    for (int i=0;i<size/2;i++)
        swap (arr[i],arr[size-i-1]);
}*/
/* void testing_reverse ()
{
    int size  = 7;
    int arr[size], copyy[size];
    for (int i=0;i<1000;i++)
    {
        for (int i=0;i<size;i++)
            copyy[i] = arr[i] = rand() %100;
            reverse_func(arr,size);
            reverse(copyy,copyy+size);
            for (int i=0;i<size;i++)
                assert(copyy[i] == arr[i]);
     }
     cout<<"perfect"<<endl;
}*/
/*void insertion_sorting (int arr[], int n)
{
    for (int i=1;i<n;i++)
    {
        int copy =arr[i];
        int j = i-1;
        for (;j>=0;j--)
        {
            if (arr[j] < copy)
                break;
            arr[j+1] = arr[j];
        }
        arr[j+1] = copy;
    }
    for (int i=0;i<n;i++)
        cout<<arr[i]<<endl;
}*/
void soritng_arrays()
{
    int a[5],b[4],res[9];
    for (int i=0;i<5;i++)
        cin>>a[i];
    for (int i=0;i<4;i++)
        cin>>b[i];
    int index1=0 ,index2 =0 , result =0;
    while (index1 < 5 && index2 < 4)
    {
        if (a[index1] < b[index2])
            res[result++] = a[index1++];
        else res[result++] = b[index2++];
    }
    while (index1 < 5)
        res[result++] = a[index1++] ;
    while (index2 < 4)
        res[result++] = b[index2++] ;
        for (int i=0;i<9;i++)
            cout<<endl<<res[i]<<endl;
}
int main()
{
    soritng_arrays();
    //testing_reverse();
    // get2ndmax();
   // testing( ) ;
    return 0;
}
