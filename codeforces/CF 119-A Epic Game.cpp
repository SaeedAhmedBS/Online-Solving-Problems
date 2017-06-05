#include<bits/stdc++.h>
using namespace std;

int gcd(int p, int s)
{
	int c;
	if (s == 0) return p;
	else while (s != 0) { c = s; s = p % s; p = c; } return p;
}
int main()
{
	int p[2];
	int s, div = 0, c = 0;
	cin >> p[0] >> p[1] >> s;
	int i = 0;
	while (s>0)
	{
		c++;
		div = gcd(s, p[i]);
		if (s < div){ break; }
		else
		{
			s -= div;
		}
		i++;
		if (i > 1){ i = 0; }
	}



	if (c % 2 == 0) { cout << "1\n";  }
	else
	{
		cout << "0\n";
	}
	return 0;
}
