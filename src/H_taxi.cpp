#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	int cnt=0,cnt1=0,cnt2=0;
	scanf ("%d",&x);
	for (int i=0;i<x;i++)
    {
        scanf ("%d",&y);
        if (y==4)
            cnt++;
        if (y==3)
            cnt1++;
        if (y==2||y==1)
            cnt2++;
    }
    printf("%d\n",cnt+cnt1+cnt2);
}
