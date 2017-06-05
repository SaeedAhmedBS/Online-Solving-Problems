#include<bits/stdc++.h>
using namespace std;

string rev[] = { ">", "<", "+", "-", ".", ",", "[", "]" };
string val[] = { "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111" };
long po[402];
long long int conv(string s)
{
	long long int ret = 0; long long int v; int z;
	for (long i = s.length() - 1; i >= 0; i--)
	{
		//v = (s[s.length() - 1 - i] - '0')*pow(2, i);
		z = (s[s.length() - 1 - i] - '0');
		v = z*po[i];
		ret += v;
		ret %= 1000003;
	}
	return ret% 1000003;
}
void gen()
{
	po[0] = 1; po[1] = 2;
	for (int i = 2; i < 402; i++)
	{
		po[i] = (po[i - 1] + po[i - 1]) % 1000003;
	}
}
long test(string s)
{
	int n = s.length();
	long res = 0;
	for (int i = 0; i < n; i++)
	{
		res = (res * 2 + int(s[i])) % 1000003;
	}
	res = res % 1000003;
	return res;
}
int main()
{
	string s , r = ""; cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		for (int k = 0; k < 8; k++)
		{
			if (s[i] == rev[k][0])
				r += val[k];
		}
	}
	gen();
	cout << conv(r)%1000003 << endl;
	return 0;
}
