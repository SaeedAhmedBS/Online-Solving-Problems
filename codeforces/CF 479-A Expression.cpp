#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
	cin >> a >> b >> c;
	int x1, x2, x3, x4;

	x1 = a + b + c;
	x2 = a *( b + c);
	x3 = (a + b) * c ;
	x4 = a * b * c;

    int m = x1;
    if (m<x2)
        m = x2;
    if (m<x3)
        m = x3;
    if (m<x4)
        m = x4;
	cout << m <<  endl;
	return 0;
}
