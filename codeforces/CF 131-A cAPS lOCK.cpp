#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
	int f = 1;
	if(islower(s[0]))
    {
        f = 1;
        for (int i = 1;i<s.length();i++)
        {
            if(islower(s[i]))
                f = 0;
        }
        if (f)
            {
                s[0] = toupper(s[0]);
                for (int i = 1;i<s.length();i++)
                    {s[i] = tolower(s[i]);}
            }
    }
    else
    {
        f = 1;
        for (int i = 1;i<s.length();i++)
        {
            if(islower(s[i]))
                f = 0;
        }
        if (f)
        {
            for (int i = 0;i<s.length();i++)
                s[i] = tolower(s[i]);
        }
    }
	cout << s << endl;
	return 0;
}
