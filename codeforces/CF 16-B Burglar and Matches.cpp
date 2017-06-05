#include<bits/stdc++.h>
using namespace std;
typedef long long int LLI;
typedef long double LD;
typedef long long LL;
long max(long b[],long m)
{
	long max = b[0]; long r = 0;
	for (long i = 0; i < m; i++)
	{
		if (b[i]>max)
		{
			max = b[i]; r = i;
		}
	}
	return r;
}
int main()
{
	long n, m;
	cin >> n >> m;
	long *a = new long[m];
	long *b = new long[m];
	for (int i = 0; i < m; i++)
	{
		cin >> a[i] >> b[i];
	}
	LLI c = 0, g = n, l = 0, y = 0;
	while (g>0)
	{
		y = max(b, m);
		l = a[y];
		if (l == 0)
			break;
		if (g >= (a[y]))
		{
			c += a[y] * b[y];
			g -= a[y];
			a[y] = b[y] = 0;

		}

		else while (( g!=0 ) && (a[y] != 0))
		{
			c += b[y];
			g--; a[y]--;
			if (a[y] == 0)
				b[y] = 0;
		}
	}
	cout << c << endl;

	return 0;
}
