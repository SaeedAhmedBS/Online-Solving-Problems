#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m ; cin >> m ;
    for (int t = 0 ; t < m ; t++)
    {
       int n ; cin >> n ;
       int* x = new int [n] ;
       for (int i = 0 ; i < n ; i++)
       {
            cin >> x[i] ;
       }
       for (int i = 1 ; i < n ;i++)
       {
           x[i] = (( x[i-1] -1 ) + ( x[i] -1 )) ;
       }
       cout << x[n-1] << endl;
    }

	return 0;
}
