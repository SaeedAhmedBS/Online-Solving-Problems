#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, a, b, x;
	cin >> n;
	if (n < 0)
	{
		a = n % 10;
		b = n % 100;
		b = b / 10;
		if (a < b)
		{
			n = n / 10;
		}
		else
		{
			n = n / 100;
			n *= 10; n += a;
		}
	}
	cout << n << endl;
	return 0;
}
