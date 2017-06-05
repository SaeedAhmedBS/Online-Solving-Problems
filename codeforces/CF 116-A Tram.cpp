#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, n, m, sum = 0, max = 0, c = 0, c2 = 0;
	cin >> s;
	while (s--)
	{
		cin >> n >> m;
		c = sum - n;
		sum = c + m;
		if (max < sum) max = sum;
	}
	cout << max << endl;
	return 0;
}
