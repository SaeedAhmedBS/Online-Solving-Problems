#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int e, k, n;
	cin >> e >> k;
	n = e - (k - (2 * e));
	if (n < 0)n = 0;
	cout << n << endl;
	return 0;
}
