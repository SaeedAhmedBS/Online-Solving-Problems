#include<bits/stdc++.h>
using namespace std;
struct dr
{
	int h = 0;
	int b = 0;
	bool operator < (const dr &t) const
	{
		return h < t.h;
	}
};
dr d[1001];
int main()
{
	int s, n; cin >> s >> n;
	for (int i = 0; i < n; i++)
		cin >> d[i].h >> d[i].b;
	sort(d, d + n);
	for (int i = 0; i < n; i++)
	{
		if (d[i].h < s)
		{
			s += d[i].b;
		}
		else
		{
			cout << "NO" << endl; return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
