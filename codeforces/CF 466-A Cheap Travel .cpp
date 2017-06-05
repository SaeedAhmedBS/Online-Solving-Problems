#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b, sum = 0;
	cin >> n >> m >> a >> b;
	int t = 0;
	int max = n*a;
	if ((m >= n) && (b < n*a))
	{
		t += m;
		sum += b;
	}
	while ((n >= m + t))
	{
		sum += b;
		t += m;
	}
	if ((b < a)&&(t<n))
	{
		sum += b;
		t += m;
	}

	while (t<n)
	{
		t++;
		sum += a;
	}
	if (max < sum){ sum = max; }
	cout << sum << endl;
	return 0;
}
