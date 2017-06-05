#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x , y , r;
    cin >> x >> y >> r;
    if(2*r<=min(x,y))
        cout << "First" << endl;
    else
        cout << "Second" << endl;

    return 0 ;
}
