#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int * p = new int [n];
    int * g = new int [n];
    for (int i = 0 ; i < n;i++)
    {
        cin >> p[i] >> g[i];
    }
    int c = 0;
    for (int i = 0 ; i < n;i++)
    {
        for (int k = 0 ; k < n ; k++)
        {
            if (p[i] == g[k])
                c++;
        }
    }
    cout << c << endl;

    return 0 ;
}
