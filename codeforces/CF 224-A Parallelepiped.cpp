#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x, y, z, a, b, c;
	cin >> a >> b >> c;
	z = sqrt(c*b / a);
	x = b / z;
	y = c / z;
	cout << x * 4 + y * 4 + z * 4 << endl;
	return 0;
}
