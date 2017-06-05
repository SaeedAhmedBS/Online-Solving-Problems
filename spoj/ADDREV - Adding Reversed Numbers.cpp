#include<bits/stdc++.h>
using namespace std;
int revint (string x)
{
    int ret = 0;
    reverse(x.begin(),x.end());
    for (int i = 0 ; i <x.length();i++)
    {
        ret*=10;
        ret += x[i] - '0';

    }
    return ret;
}
string revstr (int x)
{
    string ret = "";
    while (x)
    {
        if(!((ret == "")&&(x%10==0)))
            ret += (x%10) + '0';
        x/=10;
    }
    return ret;

}
int main()
{
    int t = 0 ; cin >> t;
    string a, b;char c; int n , x;
    while(t--)
    {
       cin >> a >> b;
       cout <<  revstr(revint(a) + revint(b)) << endl;
    }

	return 0;
}
