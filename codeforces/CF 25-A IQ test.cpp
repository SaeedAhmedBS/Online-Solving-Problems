#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <stdio.h>
#include<inttypes.h>
#include <string.h>
#include <math.h>
#include <algorithm>

typedef long long int LLI;
typedef long double LD;
typedef long long LL;
using namespace std;


int main()
{
	int n, x, y, z; cin >> n; int op = 0, p = -1;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	x = a[0]; y = a[1]; z = a[2];
	x %= 2; y %= 2; z %= 2;
	if (x+y+z)
	{
		if (x + y + z == 3)op = 1;
		else if (x+y+z == 2)
		{
			if (!x) p = 0;
			if (!y) p = 1;
			if (!z) p = 2;
		}
		else
		{
			if (x) p = 0;
			if (y) p = 1;
			if (z) p = 2;
		}
	}
	else
	{
		op = 0;
	}
	if (p != -1)
		cout << p + 1 << endl;
	else
	{
		if (op)
		{
			for (int i = 3; i < n; i++)
			{
				if (a[i] % 2 == 0)
					p = i;
			}
		}
		else
		{
			for (int i = 3; i < n; i++)
			{
				if (a[i] % 2)
					p = i;
			}
		}
		cout << p + 1 << endl;
	}
	return 0;
}
