#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, count = 0; cin >> n >> m; string s; int c , a , b;
	int *bmark = new int[m]; string * x = new string[n];
	for (int i = 0; i < m; i++)bmark[i] = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> s; x[i] = s;
		for (int t = 0; t < m; t++)
		{
			c = s[t] - '0';
			bmark[t] = (bmark[t] > c ? bmark[t] : c);
		}
	}

	for (int i = 0; i < n; i++)
	{
		c = 0;
		for (int t = 0; t < m; t++)
		{
			a = (x[i][t] - '0');
			if (a == bmark[t])
				c = 1;
		}
		if (c)count++;
	}
	cout << count << endl;
	return 0;

}
