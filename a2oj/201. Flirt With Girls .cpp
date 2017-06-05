#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ; cin >> t ;
    int n , r ,x ,y ;
    while (t--)
    {
        cin >> n >> r ;
        int count = 0 ;
        //int* x = new int [n];
        for (int i = 0 ; i < n ; i++)
        {
            cin >> x >> y ;
            if (sqrt((x*x)+(y*y))<=r)
                count ++ ;
        }
        cout << count << endl;

    }
	return 0;
}
