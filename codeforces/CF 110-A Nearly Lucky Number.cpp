#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ;int c = 0;
    cin >> s;
    for (int i = 0 ; i < s.length();i++)
    {
        if ((s[i]=='4')||(s[i]=='7'))
            c++;
    }
    int lucky [] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    bool op = false;
    for (int i = 0;i<14;i++)
    {
        if (c==lucky[i])
            op = true;
    }
    if (op==true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0 ;
}
