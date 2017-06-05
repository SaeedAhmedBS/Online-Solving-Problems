#include<bits/stdc++.h>
using namespace std;
int main()
{
int t , n , a , b ;
    cin >> t ;
    while (t--)
    {
        cin >> n >> a >> b ;
        int* x = new int [n];
        for (int i = 0 ;i < n ;i++)
        {
            cin >> x [i] ;
        }
        if ((a == x[0]) && (b == x[n-1]))
            {cout  << "BOTH" << endl;}
        else if (a == x[0])
            {cout << "EASY" << endl;}
        else if (b == x[n-1])
            {cout << "HARD" << endl;}
        else
            {cout << "OKAY" << endl;}

    }
	return 0;
}
