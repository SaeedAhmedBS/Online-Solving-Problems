#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t; cin >> t;
    while (t--)
    {
        double s, n, k, m , ta = 0, td = 0, t = 0;
        cin >> s >> n >> k >> m;
        ta = n / s;
        td = m / k;
        if (ta < td)
        {
            cout << "-1" << endl;
        }
        else
        {
            t = ta - td; cout << fixed << setprecision(5) << t << endl;
        }
    }
	return 0;
}
