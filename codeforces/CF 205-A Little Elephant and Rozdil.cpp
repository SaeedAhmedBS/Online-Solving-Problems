#include<bits/stdc++.h>

typedef long long int LLI;
typedef long double LD;
typedef long long LL;
using namespace std;

int main()
{
    LLI min = 10000000000 , c = 0 , n ,t , p;
    cin >> n;
    for (LLI i = 1 ; i <= n;i++)
    {
        cin >> t;
        if (t<min)
        {
            min = t;c  = 0;
            p = i;
        }
        else if (t == min)
            c++;
    }
    if (c == 0)
        cout << p << endl;
    else
        cout << "Still Rozdil" << endl;

    return 0 ;
}
