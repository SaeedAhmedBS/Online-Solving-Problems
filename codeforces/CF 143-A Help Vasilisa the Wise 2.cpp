#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, d, c1, c2, r1, r2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	a = (r1 + c1 - d2) / 2;
	b = (r1 + c2 - d1) / 2;
	c = c1 - a;
	d = c2 - b;
	if ((a >= 1 && a < 10) && (b >= 1 && b < 10) && (c >= 1 && c < 10) && (d >= 1 && d < 10)
		&& (a != b) && (a != c) && (a != d) && (b != c) && (d != b) && (c != d)
		&& (a + b == r1) && (c + d == r2) && (a + d == d1) && (b+c==d2))
		cout << a << " " << b << endl << c << " " << d << endl;
	else
		cout << -1 << endl;
}
