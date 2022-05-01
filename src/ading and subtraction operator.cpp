#include <bits/stdc++.h>
using namespace std;
int A,B;
char x;
int main()
{
   scanf ("%d %c %d",&A,&x,&B);
   if (x=='+')
    printf ("%d\n",A+B);
    else printf ("%d\n",A-B);
}
