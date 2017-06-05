#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    int * a = new int [n];
    int * b = new int [n];
    for (int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
        b[a[i]-1] = i+1;
    }
    for (int i = 0;i<n - 1 ;i++)
    {
        cout << b[i] <<" ";
    }
    cout << b[n-1] << endl;
	return 0;
}
