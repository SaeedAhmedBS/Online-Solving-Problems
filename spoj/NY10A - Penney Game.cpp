#include<bits/stdc++.h>
using namespace std;

string val[] = { "TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH" };
void com(string s, int x[])
{
	string r = "";
	for (int i = 0; i<s.length() - 2; i++)
	{
		r = ""; r += s[i]; r += s[i + 1]; r += s[i + 2];
		for (int i = 0; i<8; i++)
		{
			if (r == val[i])
			{
				x[i]++;
			}
		}
	}
}
int main()
{
	int t, n; string s;
	cin >> t;
	int x[8];

	while (t--)
	{
		for (int i = 0; i<8; i++) x[i] = 0;
		cin >> n >> s;
		com(s, x);
		cout << n;
		for (int i = 0; i<8; i++) cout << " " << x[i];
		cout << endl;
	}

	return 0;
}
