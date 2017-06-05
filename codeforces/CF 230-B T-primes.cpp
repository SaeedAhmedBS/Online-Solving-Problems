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

typedef long long int lli;
typedef long double ld;
typedef long long ll;
using namespace std;

lli a[1000001];
void primes_number(int Max)
{
	for (int i = 1; i <= Max; i++)
	{
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for (int i = 2; i <= 10000; i++)
	{
		if (a[i])
		{
			for (int j = 2 * i; j <= Max; j += i)
			{
				a[j] = 0;
			}
		}
	}
}
lli num[100001];
int main()
{
	primes_number(1000001);
	int n; cin >> n; lli t;
	for (int i = 0; i<n; i++)
		scanf("%I64d", &num[i]);
	for (int i = 0; i<n; i++)
	{
		t = sqrt(num[i]);
		if ((num[i]==t*t)&&(a[t]))
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}
