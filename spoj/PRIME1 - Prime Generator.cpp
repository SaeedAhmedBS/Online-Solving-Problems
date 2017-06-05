#include<bits/stdc++.h>
using namespace std;

bool Is_Prima_Loop(LLI n)
{
	if (n == 2)return true;
	if (n < 2 || n % 2 == 0)return false;
	for (LLI i = 3; i*i <= n; i += 2)
	{
		if (n%i == 0)return false;
	}
	return true;
}
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
    int t;cin >> t;
    while (t--)
    {
       int n,m;
       cin >> n >> m;
       for (int i = n ; i <= m;i++)
       {
           if(Is_Prima_Loop(i))
                cout << i << endl;
       }
       cout << endl;
    }
    return 0 ;
}
