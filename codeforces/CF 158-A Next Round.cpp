#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g[50], n, k, c = 0; memset(g, 0, sizeof(g));
	cin >> n >> k;
	for (int i = 0; i<n; i++)
		cin >> g[i];
	int i = 0;
	for (int i = 0; i < n; i++)
	{
		if ((g[i] >= g[k - 1]) && (g[i] > 0))
		{
			c++;
		}
	}
	cout << c << endl;
	return 0;
}
