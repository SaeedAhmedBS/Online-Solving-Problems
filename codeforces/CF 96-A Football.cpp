#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; int x = 0, y = 0 , f = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '0')
		{
			x++; y = 0;
		}
		else
		{
			y++; x = 0;
		}
        if (x >= 7 || y >= 7)f = 1;
	}
	cout << (f ? "YES\n" : "NO\n");
	return 0;
}
