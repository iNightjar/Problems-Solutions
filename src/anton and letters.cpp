#include <bits/stdc++.h>
#include<stdio.h>
#include<string.h>
int main()
{

    int n,i,s=0,a,b=0,c;
    char ch[100000];
    int arr[26]= {0};
    gets(ch);
    for(i=0; ch[i]!='\0'; i++)
    {
        if(ch[i]>96)
       arr[ch[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(arr[i]!=0)b++;
    }
    printf("%d\n",b);

}
