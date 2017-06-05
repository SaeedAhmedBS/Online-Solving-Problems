#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
		switch (s[i])
		{
		case 'a':break;
		case 'e':break;
		case 'u':break;
		case 'i':break;
		case 'o':break;
		case 'y':break;
		default:
			cout << "." << s[i];
			break;
		}
	}
	cout << endl;
	return 0;
}
