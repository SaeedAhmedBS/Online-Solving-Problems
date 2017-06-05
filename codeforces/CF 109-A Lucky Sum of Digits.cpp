#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, d; cin >> n;
	a = n / 7; b = n % 7; c = b / 4; d = b % 4;
	if (d)
	{
		if (a >= d)
		{
			c += ((d * 7 + d) / 4); a -= d;
		}
		else
		{
			cout << -1 << endl; return 0;
		}
	}
	for (int i = 0; i < c; i++)
		cout << '4';
	for (int i = 0; i < a; i++)
		cout << '7';
	cout << endl;
	return 0;
}
