#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <stdio.h>
#include<inttypes.h>
#include <string.h>
#include <math.h>
#include <algorithm>

typedef long long int LLI;
typedef long double LD;
typedef long long LL;
using namespace std;

int main()
{
	int n;cin >> n;
	int*x = new int [n];
	int vis [1001];
	for (int i = 0;i<1001;i++)
        vis [i] = 0;
    for (int i = 0 ; i < n;i++)
    {
        cin >> x[i];
        vis[x[i]]++;
    }
    int maxt = 0 , t = 0;
    for (int i = 0;i<1001;i++)
    {
        if(vis[i])
        {
            maxt = (vis[i]>maxt ? vis[i] : maxt);
            t++;
        }
    }
    cout << maxt << " " << t << endl;
	return 0;

}
