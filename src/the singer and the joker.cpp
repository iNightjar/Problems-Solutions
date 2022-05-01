#include <iostream>
using namespace std;
int main()
{
	int n = 0, d, i, sum = 0;
	
		cin >> n >> d;
		if (n >= 1 && n <= 100)
		{
		int *a = new int[n];
		int l;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		l = (10 * (n - 1) + sum);
		if (l > d)
		{
			cout << -1;
			return 0;
		}
		else if (l == d)
		{
			cout << 2 * (n - 1);
			return 0;
		}
		else
		{
			cout << (d - l) / 5 + 2 * (n - 1);
			return 0;
		}
	}
}
