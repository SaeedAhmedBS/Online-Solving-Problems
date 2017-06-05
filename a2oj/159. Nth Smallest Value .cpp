#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t , n[10];cin >> t;
    while(t--)
    {
        for(int i = 0;i<10;i++)
            cin >> n[i];
        sort(n,n+10);
        cout << n[1] << endl;
    }
	return 0;
}
