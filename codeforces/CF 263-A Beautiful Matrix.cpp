#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m [5][5];
	int p1,p2;
	for (int i = 0;i<5;i++)
    {
        for (int u = 0;u<5;u++)
        {
            cin >> m[i][u];
            if (m[i][u]== 1)
            {
                p1 = i;p2 = u;
            }
        }
    }
    int c = 0;
    c += abs(p1-2);
    c +=abs(p2-2);
    cout << c << endl;
    return 0 ;
}
