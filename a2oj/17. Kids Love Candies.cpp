#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t , n , a , b ;
    cin >> t ;
    while (t--)
    {
        int count = 0 ;
        cin >> a ;
        int* x = new int [a] ;
        cin >> b ;
        for (int i = 0 ; i < a ; i++)
        {
            cin >> x[i];
            count += (x[i]/b) ;
        }
        cout << count <<  endl;
    }
	return 0;
}
