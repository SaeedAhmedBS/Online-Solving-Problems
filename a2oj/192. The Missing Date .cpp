#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y1 , y2 , y3 , m1 , m2 , m3 , n ;
    cin >> n ;
    for (int t = 0 ; t < n ; t++)
    {
        cin >> y1 >> m1 >> y2 >> m2 ;
        y3 = y1 + y2 ;
        if ((m1 + m2) > 12) {m3 = m1 + m2 - 12 ; y3++;  } else {m3 = m1 + m2 ;}
        cout << y3 << " " << m3 << endl ;
    }
	return 0;
}
