#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, x[200],y[200],t = 0 , r = 0,l = 0, u = 0, d = 0,c=0;
	cin >> n;
	for (int i = 0; i < n;i++)
	{
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n; i++)
	{
		int p = 0; t = 0, r = 0, l = 0, u = 0, d = 0;
		for (int k = 0; k < n; k++)
		{
			if ((x[i] == x[k]) && (y[i] > y[k])){ d++; }
			if ((x[i] == x[k]) && (y[i] < y[k])){ u++; }
			if ((x[i] > x[k]) && (y[i] == y[k])){ l++; }
			if ((x[i] < x[k]) && (y[i] == y[k])){ r++; }
			if (d&&u&&l&&r)
				p++;
		}
		if (p)
			c++;
	}
	cout << c << endl;
	return 0;
}
