#include<bits/stdc++.h>
using namespace std;
string conv(string s)
{
	string r;
	for (int i = 0; i < s.length(); i++)
	{
		string t;
		switch (s[i])
		{
		case '.':
			if (i>0)
			{
				if (isdigit(r[r.length() - 1]))
					r += ' ';
			}
			if (i > 2)
			{
				t += r[r.length() - 3];
				t += r[r.length() - 2];
				t += r[r.length()-1];
			}
			if ((i>2) && (t == "..."))//== '.')&&(s[i - 1] == '.')&&(s[i - 2] == '.'
			{
				r += " .";
			}
			else
			{
				r += '.';
			}
			t.clear();
			break;
		case' ':
			break;
		case',':
			if (i == s.length() - 1){ r += ','; break; }
			r += ", ";
			break;
		default:
			if ((i>0)&&(isdigit(r[r.length() - 1]) && (s[i - 1] == ' ') && (isdigit(s[i]))))
			{
				r += ' ';
				r += s[i];
			}
			else if (isdigit(s[i]))
			{
				r += s[i];
			}
			break;
		}
	}
	return r;
}
int main()
{
	string s;

	while (getline(cin ,s))
	{
		cout << conv(s) << endl;
	}

	return 0;
}
