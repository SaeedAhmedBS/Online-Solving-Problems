#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n , a , c;
	cin >> n;
    bool g [101];
	for (int i = 0; i < n; i++){ g[i] = false; }
	for (int k = 0 ; k <2;k++)
    {
        cin >> a;
        for (int i = 0; i < a; i++)
        {
            cin >> c;
            g[c - 1] = true;
        }
    }
	for (int i = 0; i < n; i++)
	{
		if (g[i] == false)
		{
			cout << "Oh, my keyboard!" << endl;
			return 0;
		}
	}
	cout << "I become the guy." << endl;
    return 0 ;
}
