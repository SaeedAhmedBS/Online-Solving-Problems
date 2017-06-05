#include<bits/stdc++.h>
using namespace std;


int is_lucky(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (!((s[i] == '4') || (s[i] == '7')))
			return 0;
	}
	return 1;
}
int sum_equ(string s)
{
	int rs = 0, ls = 0; int i;
	for ( i = 0; i < s.length() / 2; i++)
		rs += (s[i] - '0');
	for (; i < s.length(); i++)
		ls += (s[i] - '0');
	return ls == rs;
}
int main()
{
	int n; string s; cin >> n >> s;
	if ((is_lucky(s)) && (sum_equ(s)))
		cout << "YES\n";
	else
	{
		cout << "NO\n";
	}
}
