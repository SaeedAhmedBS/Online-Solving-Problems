#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, fx, fy, mi, mj, c;
	fx = fy = 55; mi = mj = -1;
	cin >> x >> y;
	//char g [50][50];
	string s[50], t; int m = 0; c = 0;
	for (int i = 0; i < x; i++)
	{
		cin >> s[i];
		for (int j = 0; j<s[i].length(); j++)
		{
			if (s[i][j] == '*')
			{
				c++;
				if (mj<j)
					mj = j;
				if (mi<i)
					mi = i;
				if (fx > i)
					fx = i;
				if (fy > j)
					fy = j;
			}
		}
	}
	for (int i = fx; i <mi + 1; i++)
	{
		for (int j = fy; j<mj + 1; j++)
		{
			cout << s[i][j];
		}
		cout << endl;
	}
	return 0;
}
