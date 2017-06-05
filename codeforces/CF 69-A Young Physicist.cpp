#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
	int x, y, z;
	long sx = 0, sy = 0, sz = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y >> z;
		sx += x; sy += y; sz += z;
	}
	if ((sx == 0) && (sy == 0) && (sz == 0)) { cout << "YES" << endl; }
	else { cout << "NO" << endl; }
    return 0 ;
}
