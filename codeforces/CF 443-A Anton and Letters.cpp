#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; getline (cin,s);
	int c = 0; int n[26];
	for (int i = 0; i < 26; i++){ n[i] = 0; }
	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s[i]))
		{
			n[s[i] - 97]++;
		}
	}
	for (int i = 0; i < 26; i++)
		if (n[i] != 0)
			c++;
	cout << c << endl;
	return 0;
}
