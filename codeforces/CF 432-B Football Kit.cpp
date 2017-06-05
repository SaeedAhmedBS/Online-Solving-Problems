#include<bits/stdc++.h>
using namespace std;

struct team
{
	long long home = 0;
	long long away = 0;
};
team t [100002],r[100002];
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	long long n; cin >> n;
	long long h = 0, w = 0;

	for (long long i = 0; i < n; i++)
	{
		scanf("%d%d", &h, &w);
		t[i].home = h; t[i].away = w;
	}
	for (long long i = 0; i<n; i++)
	{
		/*for (long long k = i + 1; k<n; k++)
		{
			if (t[i].away == t[k].home)
			{
				r[i].home += 2;
			}
			else
			{
				r[i].away++; r[i].home++;
			}
			if (t[k].away == t[i].home)
			{
				r[k].home += 2;
			}
			else
			{
				r[k].away++; r[k].home++;
			}
		}*/
		r[t[i].home].home++;r[t[i].away].away++;
	}
	for (long long i = 0; i < n; i++)
	{
		h = n - 1 + r[t[i].away].home; w = n - 1 - r[t[i].away].home;
		printf("%lld %lld\n", h, w);
	}
	return 0;
}
