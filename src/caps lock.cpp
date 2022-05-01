#include<bits/stdc++.h>
using namespace std;
typedef	long long ll;
char arr[200];
int main()
{
    scanf("%s",arr);
    bool flag=true;

        for(int i=1; i<strlen(arr); i++)
            if(!isupper(arr[i]))
                flag=false;
    if(flag==true)
        {
        for(int i=0;i<strlen(arr);i++)
        {
            if(isupper(arr[i]))
                arr[i]=tolower(arr[i]);
            else
            arr[i]=toupper(arr[i]);
        }

    }
    printf("%s\n",arr);
}
