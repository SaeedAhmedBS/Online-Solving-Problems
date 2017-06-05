#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t; int c = 0,n;
	while (t--)
	{
		c = 0;
		cin >> n;
		while (n>0)
		{
			if (n % 2 != 0)
			{
				c++; n -= 1; n = n / 2;
			}
			else
			{
				n = n / 2;
			}
		}
		cout << c << endl;
	}
	return 0;
}
