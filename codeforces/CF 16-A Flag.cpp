#include<bits/stdc++.h>
using namespace std;
int main()
{
    char g [101][101];
	int x,y,f = 0;
	cin >> x >> y;
	for (int i = 0 ; i < x;i++)
    {
        for (int j = 0 ; j<y;j++)
        {
            //string s;
            cin >> g[i][j];
        }
    }
    for (int i = 0 ; i  < x-1;i++)
    {
        for (int j = 0 ; j<y -1 ;j++)
        {
            if(g[i][j]!=g[i][j+1])
                f = 1;
        }
        if(g[i][0]==g[i+1][0])
            f = 1;
    }
    for (int j = 0 ; j<y -1 ;j++)
    {
        if(g[x-1][j]!=g[x-1][j+1])
            f = 1;
    }
    if (f)
        printf("NO\n");
    else
        printf ("YES\n");
	return 0;
}
