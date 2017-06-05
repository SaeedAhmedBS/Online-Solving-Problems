#include<bits/stdc++.h>
using namespace std;

int rt(int c[])
{
    int x[3];
    x[0] = (c[2] - c[0]) * (c[2] - c[0]) + (c[3] - c[1])* (c[3] - c[1]);
    x[1] = (c[4] - c[0]) * (c[4] - c[0]) + (c[5] - c[1])* (c[5] - c[1]);
    x[2] = (c[4] - c[2]) * (c[4] - c[2]) + (c[5] - c[3])* (c[5] - c[3]);
    sort(x,x+3);
    if(x[0] > 0 && x[2] == x[0] + x[1]){return 1;}
    else{return 0;}
}

int main()
{
    int p[6];
    for (int i = 0 ; i<6;i++)
        cin >> p[i];
    if(rt(p))
    {
        cout << "RIGHT" << endl;return 0;
    }
    for (int i = 0;i<6;i++)
    {
        p[i]++; {if(rt(p)){cout << "ALMOST" << endl; return 0;}}
        p[i]-=2; {if(rt(p)){cout << "ALMOST" << endl; return 0;}}
        p[i]++;
    }
    cout << "NEITHER" << endl; return 0;
	return 0;
}
