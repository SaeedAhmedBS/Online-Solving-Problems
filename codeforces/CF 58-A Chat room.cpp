#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
	cin >> s;
	char d[] = { 'h', 'e', 'l','l', 'o' };
	//hello
	int c = 0;int h = 0;
	for (int i = 0; i < s.length();i++)
	{
		if (s[i] == d[h])
		{
			h++;
			if (h==5)
            {
                cout << "YES" << endl;
                return 0;
            }
		}
	}
	cout << "NO" << endl;
	return 0;
}
