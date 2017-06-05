#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1, s2; int p1, p2;
	cin >> s1 >> s2;
	if (s1.length() != s2.length())
	{
		cout << "NO" << endl; return 0;
	}
	int c = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if ((s1[i] != s2[i]) && (c>2))
		{
			cout << "NO" << endl; return 0;
		}
		if ((s1[i] != s2[i]) && (c == 1))
		{
			p2 = i;
			c++;
		}
		if ((s1[i] != s2[i]) && (c==0))
		{
			p1 = i;
			c++;
		}
	}
	if (c==2)
		swap(s1[p1], s1[p2]);
	if (s1 == s2)
		printf("YES\n");
	else
	{
		printf("NO\n");
	}
	return 0;
}
