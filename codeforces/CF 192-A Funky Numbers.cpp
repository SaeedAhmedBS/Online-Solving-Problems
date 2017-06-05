#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n; cin >> n;
	int x = sqrt(2*n) + 1;
	for (long i = 1; i<= x; i++)
	{
	    long r = 2*n - i*i-i;r = sqrt(r) + 1;
		for (long k = i; k <= r ; k++)
		{
			if (2 * n == (i*(i + 1) + (k*(k + 1))))
			{
				cout <<"YES\n"; return 0;
			}
		}
	}
	cout << "NO\n";
	return 0;
}
