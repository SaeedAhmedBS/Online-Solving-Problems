#include<bits/stdc++.h>
using namespace std;
int op (int x ,int n , char c)
{
    if (c=='+')return x + n;
    if (c=='-')return x - n;
    if (c=='/')return x / n;
    if (c=='*')return x * n;
    return 0;
}
int main()
{
    int t ; cin >> t;
    string s;char c; int n , x;
    while(t--)
    {
        cin >> x;
        while(true)
        {
            cin >> c ;
            if (c == '=')
            {
               cout << x << endl;break;
            }
            cin >> n;
            x = op (x ,n ,c);
        }
    }

	return 0;
}
