#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,dl,dp,dm , t = 0;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    dl = k*l;dm = c*d;
    while ((dl>=nl)&&(p>=np)&&(dm))
    {
        dm--;dl-=nl;p-=np;
        t++;
    }
    cout << (t / n) << endl;
	return 0;
}
