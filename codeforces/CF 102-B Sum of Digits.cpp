#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
	long long int c = 0, n = 0, sum = 0;
	while (s.length()>1)
	{
		for (int i = 0; i < s.length(); i++)
		{
			n += s[i] - 48;
		}
		stringstream ss; ss << n;
        s = ss.str();
		c++;
		n = 0;
	}
	cout << c << endl;
    return 0 ;
}
