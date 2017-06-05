#include<bits/stdc++.h>
using namespace std;

string palt[] = { "01:10", "02:20", "03:30", "04:40", "05:50","10:01","11:11","12:21", "13:31", "14:41", "15:51", "20:02", "21:12", "22:22", "23:32", "00:00" };
void nextpal(string s)
{
	int h = (s[0] - '0') * 10 + (s[1] - '0');
	int m = (s[3] - '0') * 10 + (s[4] - '0');
	int rvh = (s[1] - '0') * 10 + (s[0] - '0');
	if (m >= rvh||rvh>59)
	{
		h++;
		if (h > 23)
		{
			cout << "00:00" << endl; return;
		}
		if ((h < 6))
		{
			cout << palt[h - 1] << endl; return;
		}
		if (h > 5 && h < 11)
		{
			cout << palt[5] << endl; return;
		}
		if (h >= 11 && h < 16)
		{
			cout << palt[h - 5] << endl; return;
		}
		if (h >= 16 && h < 21)
		{
			cout << palt[11] << endl; return;
		}
		if ((h >= 21 && h < 24))
		{
			cout << palt[h - 9] << endl; return;
		}
	}
	else
	{
		string r;
		r += s[0]; r += s[1]; r += s[2]; r += s[1]; r += s[0];
		cout << r << endl;
	}
}
int main()
{
	string s; cin >> s;
	nextpal(s);
	return 0;
}
