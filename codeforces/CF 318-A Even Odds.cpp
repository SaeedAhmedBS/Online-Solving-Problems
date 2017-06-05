#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, p;
	cin >> n >> k;
	if (n % 2 == 0)
	{
		if (k <= n / 2)
		{
			p = (k * 2) - 1;
		}
		else
		{
			p = (k - (n / 2)) * 2;
		}
	}
	else
	{
		int q = (n / 2) + 1;
		if (k <= ( (n / 2) + 1))
		{
			p = (k * 2) - 1;
		}
		else
		{
			k -= (n / 2) + 1;
			p = k * 2;
		}
	}
	cout << p << endl;
    return 0 ;
}
