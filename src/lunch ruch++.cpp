#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <memory.h>
#include <ctime>

using namespace std;

#define ABS(a) ((a>0)?a:-(a))
#define MIN(a,b) ((a<b)?(a):(b))
#define MAX(a,b) ((a<b)?(b):(a))
#define FOR(i,a,n) for (int i=(a);i<(n);++i)
#define FI(i,n) for (int i=0; i<(n); ++i)
#define pnt pair <int, int>
#define mp make_pair
#define PI 3.14159265358979
#define MEMS(a,b) memset(a,b,sizeof(a))
#define LL long long
#define U unsigned


int main()
{
#ifdef Fcdkbear
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    double beg=clock();
#endif

	int res=-2000000000;
	int n,T;
	scanf("%d%d",&n,&T);
	FOR(i,0,n)
	{
		int f,t;
		scanf("%d%d",&f,&t);
		int cur=f;
		if (t>T)
			cur-=(t-T);
		res=MAX(res,cur);
	}
	cout<<res<<endl;
#ifdef Fcdkbear
    double end=clock();
    fprintf(stderr,"*** Total time = %.3lf ***\n",(end-beg)/CLOCKS_PER_SEC);
#endif
    return 0;
}
