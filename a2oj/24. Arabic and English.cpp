#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; int l = 0; string a = "" ;
        string * s = new string[n]; string out = "";
        for (int i = 0; i < n; i++)
            cin >> s[i];
        string tamp = "";

        for (int i = 0; i < n; i++)
        {
            if (s[i][0] == '#')
            {
                if (l == 0)
                {
                    if (a == "")
                    {
                        a += s[i];
                    }
                    else
                    {
                        a += " "; a += s[i];
                    }
                }
                else
                {
                    tamp = out;
                    out = a;
                    if (tamp != "")
                    {
                        out += " ";
                        out += tamp;
                        a = ""; a += s[i];
                    }
                    else
                    {
                        a = "" ; a += s[i];
                    }

                    l = 0;
                }
            }
            else
            {
                if (l == 1)
                {
                    if (a == "")
                    {
                        a += s[i];
                    }
                    else
                    {
                        a += " "; a += s[i];
                    }
                }
                else
                {
                    tamp = out;
                    out = a;
                    if (tamp != "")
                    {
                        out += " ";
                        out += tamp;
                        a = ""; a += s[i];
                    }
                    else
                    {
                        a = ""; a += s[i];
                    }

                    l = 1;
                }
            }
        }

        tamp = out;
        out = a;
        out += " ";
        out += tamp;

        cout << out << endl;
    }

    return 0;
}
