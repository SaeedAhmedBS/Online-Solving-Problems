#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n, m;
	cin >> n >> m;
	int c;
	/*bool ** a = new bool *[n];
	for (int i = 0; i < n; i++)
		a[i] = new bool[m];*/
	if (n < m)
		c = n - 1;
	else
	{
		c = m - 1;
	}
	if (c % 2 == 0)cout << "Akshat" << endl;
	else
	{
		cout << "Malvika" << endl;
	}
	return 0;
}
