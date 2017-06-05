#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s; int c = 0, p = 0, count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'C')
		{
			if (p)
			{
				count += p / 5; p %= 5;
				if (p)
					count++; p = 0;
			}
			c++;
		}
		else
		{
			if (c)
			{
				count += c / 5; c %= 5;
				if (c)
					count++; c = 0;
			}
			p++;
		}
	}
	if (p)
	{
		count += p / 5; p %= 5;
		if (p)
			count++; p = 0;
	}
	if (c)
	{
		count += c / 5; c %= 5;
		if (c)
			count++; c = 0;
	}
	cout << count << endl;
	return 0;
}
