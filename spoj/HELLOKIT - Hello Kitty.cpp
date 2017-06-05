#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ;int n;
    while (cin >> s && s!=".")
    {
        cin >> n;
        for (int i = 0 ; i<s.length();i++)
        {
            for (int k = i;k < s.length()*n + i;k++)
                cout << s[k%s.length()];
            cout << endl;
        }
    }
	return 0;
}
