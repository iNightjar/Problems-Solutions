#include <stdio.h>

using namespace std;

int main()
{
 int A=1,B=1,C=1,D=1;
 scanf ("%d%d%d%d",&A,&B,&C,&D);
  if ((A*B) == (C*D))
    printf ("%d\n",A*B);
      else if ((A*B)>(C*D))
    printf ("%d\n",A*B);
    else printf ("%d\n",C*D);
    return 0;
}

