#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; string t;
	cin >> s;
	//s = "WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB";
	int c = 0;
	string out ="";
	if (s.length() < 3){ cout << s << endl; return 0; }
	//if (s[0] != 'W'){ out += s[0]; }
	//if (s[0] != 'U'){ out += s[1]; }
	//if (s[0] != 'B'){ out += s[2]; }
	int i;
	for ( i = 0; i < s.length() - 2; i++)
	{
		t = "";
		t += s[i]; t += s[i + 1]; t += s[i + 2];
		if (t != "WUB")
		{
			out += s[i]; c++;
		}
		else
		{
			i += 2;
			if (c != 0)
			{
				if (out[out.length() - 1] != ' ')
				{
					out += " ";
				}
			}
		}
	}
	while (i<s.length())
	{
		out += s[i]; i++;
	}
	cout << out << endl;
	return 0;
}
