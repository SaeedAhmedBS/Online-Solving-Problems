#include<bits/stdc++.h>
typedef long long int LLI;
typedef long double LD;
typedef long long LL;
using namespace std;

int main()
{
	string s , a;
	bool f, r;
	int T, c;
	cin >> T;
	T++;
	//cout << endl;
	while (T--)
	{
		f = false; r = false;
		c = 0;
		//cin >> s;
		getline(cin, s);
		if (s.length() == 0)
		{
		}
		else if (s.length() < 5)
		{
			cout << "OMG>.< I don't know!" << endl;
		}
		else
		{
			//a = s[s.length() - 6];
			a = s[s.length() - 5];
			a += s[s.length() - 4];
			a += s[s.length() - 3];
			a += s[s.length() - 2];
			a += s[s.length() - 1];
			if (a == "lala.")
				f = true;

			a = s[0];
			a += s[1];
			a += s[2];
			a += s[3];
			a += s[4];
			if (a == "miao.")
				r = true;


			if (f == true && r == false)
				cout << "Freda's" << endl;
			else if (f == false && r == true)
				cout << "Rainbow's" << endl;
			else
			{
				cout << "OMG>.< I don't know!" << endl;
			}
			a.clear();
		}

	}

	return 0;
}
