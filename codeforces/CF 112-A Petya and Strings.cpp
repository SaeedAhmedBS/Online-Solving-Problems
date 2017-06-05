#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, d;
	cin >> s >> d;
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
		d[i] = tolower(d[i]);
		if (s[i] != d[i])
		{
			if (s[i]>d[i])
				cout << "1" << endl;
			else
			{
				cout << "-1" << endl;
			}
			return 0;
		}
	}
	cout << "0" << endl;
    return 0 ;
}
