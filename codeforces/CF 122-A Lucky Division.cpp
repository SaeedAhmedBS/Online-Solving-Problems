#include<bits/stdc++.h>
using namespace std;
bool lucky(long n)
{
	int arr [] = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777 };
	for (int i = 0; i < 14; i++)
	{
		if (n>arr[i] && n%arr[i] == 0)
			return true;
	}
	while (n>0)
	{
		if (n % 10 != 4 && n % 10 != 7)
		{
			return false;
		}
		n /= 10;
	}
	return true ;
}
int main()
{
    int n ;cin >> n;
    if (lucky(n))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0 ;
}
