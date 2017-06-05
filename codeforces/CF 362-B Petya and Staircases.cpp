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

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
    lli n, m,t; cin >> n >> m;
    lli c = 0;
	lli * dirt = new lli[m];
	for (lli i = 0; i < m; i++)
	{
	    scanf("%d",&c);
	    dirt[i] = c;
		//cin >> dirt[i];
	}
	t = 1;
	sort(dirt, dirt + m);
	if ((dirt[0] == 1) || (dirt[m - 1] == n))
	{
		cout << "NO\n"; return 0;
	}
	for (lli i = 0; i < m -2; i++)
	{
		if ((dirt[i] + 1 == dirt[i + 1]) && (dirt[i + 1] + 1 == dirt[i + 2]))
			t = 0;
	}
	if (t)
		cout << "YES\n";
	else
	{
		cout << "NO\n";
	}

    return 0 ;
}
