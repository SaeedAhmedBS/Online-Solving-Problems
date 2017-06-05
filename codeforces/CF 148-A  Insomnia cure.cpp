#include<bits/stdc++.h>
using namespace std;
int main()
{

	int a, b, c, d,n, s = 0;
	cin >> a >> b >> c >> d >> n;
	int *x = new int[n];
	for (int i = 0; i < n; i++)
		x[i] = 0;
	for (int i = 1; i*a <= n; i++)
	{
		x[i*a -1] = 1;
	}
	for (int i = 1; i*b <= n; i++)
	{
		x[i*b -1] = 1;
	}
	for (int i = 1; i*c <= n; i++)
	{
		x[i*c -1] = 1;
	}
	for (int i = 1; i*d <= n; i++)
	{
		x[i*d -1] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		if (x[i])
		{
			s++;
		}
	}
	cout << s << endl;
	return 0;

}
