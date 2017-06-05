#include<bits/stdc++.h>
using namespace std;
int main()
{
    string r = "6789TJQKEA";
	char t; string s1, s2; int f = 0,p1 = 0 , p2 = 0;
	cin >> t >> s1 >> s2;
	if (s1[1] == t&&s2[1]!=t)
		f = 1;
	else if (s1[1] == s2[1])
	{
		for (int i = 0; i < r.length(); i++)
		{
			if (s1[0] == r[i])
				p1 = i;
			if (s2[0] == r[i])
				p2 = i;
		}
		if (p1 > p2)
			f = 1;
	}
	if (f)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
