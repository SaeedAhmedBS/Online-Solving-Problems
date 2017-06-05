#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
	cin >> m;
	int *n = new int[m];
	string *x = new string[m];
	for (int i = 0; i < m; i++)
		cin >> n[i] >> x[i];
	for (int i = 1; i <= m; i++)
	{
		cout << i << " ";
		string a = x[i - 1];
		for (int t = 0; t <a.length(); t++)
		{
			if (t == n[i - 1] - 1)
				continue;
			cout << a[t];
		}
		cout << endl;
	}
	return 0;
}
