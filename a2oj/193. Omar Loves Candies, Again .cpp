#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int l[26];
        for (int i = 0; i < 26; i++){ l[i] = 0; }

        int max = 0; char p = 0;
        string s; cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            l[s[i] - 97]++;
            //p = s[i];
        }
        for (int i = 0; i < 26; i++)
        {
            if (l[i]>max)
            {
                max = l[i];
                p = i + 97;
            }
        }
        cout << max << " " << p << endl;
    }
	return 0;
}
