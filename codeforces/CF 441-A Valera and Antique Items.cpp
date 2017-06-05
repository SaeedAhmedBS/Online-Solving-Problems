#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>
#include <algorithm>

typedef long long int LLI;
typedef long double LD;
typedef long long LL;
using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int w[50];
	int n, m, r = 0, c = 0; string o = "";
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		int x; cin >> x;
		int*a = new int[x];
		for (int t = 0; t < x; t++)
		{
			cin >> a[t];
			if (a[t] < m)
			{
				if (c == 0)
				{
					w[0] = i; c++;
				}
				else
				{
					if (w[c - 1] != i)
					{
						w[c] = i; c++;
					}
				}
			}
		}
	}
		cout << c << endl;
		if (c>0)
			cout << w[0];
		for (int i = 1; i < c; i++)
			cout << " " << w[i];
		cout << endl;
		return 0;
}
