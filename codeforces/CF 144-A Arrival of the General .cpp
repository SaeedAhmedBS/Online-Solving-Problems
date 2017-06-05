#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0; cin >> n;
	int*a = new int[n];
	cin >> a[0];
	int min = a[0], max = a[0]; int pmax = 0, pmin = 0;
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > max)
		{
			pmax = i; max = a[i];
		}
		//if (a[i] <= min)
		//{
		//	pmin = i; min = a[i];
		//}
	}
	int t = 0, c = 0;
	while (pmax!= 0)
	{
		c++;
		t = a[pmax - 1];
		a[pmax - 1] = a[pmax];
		a[pmax] = t;
		pmax--;
	}
	for (int i = 1; i < n; i++)
	{
		if (a[i] <= min)
		{
			pmin = i; min = a[i];
		}
	}
	while (pmin != n-1)
	{
		c++;
		t = a[pmax + 1];
		a[pmax + 1] = a[pmax];
		a[pmax] = t;
		pmin++;
	}

	cout << c << endl;
	return 0;
}
