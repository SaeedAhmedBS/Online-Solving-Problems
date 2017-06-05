#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m , p , c = -1;
	cin >> n >> m;
	while (m%n==0)
    {
        c++;
        m/=n;
    }
	if (c>= 0 && m == 1) cout << "YES\n" << c << endl;
	else cout << "NO\n";
	return 0;
}
