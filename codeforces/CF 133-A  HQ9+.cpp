#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; int f = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')// || s[i] == '+'
			f = 1;
	cout << (f ? "YES" : "NO" )<< endl;
	return 0;
}
