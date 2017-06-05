#include<bits/stdc++.h>
using namespace std;
int main()
{
    int no1,no2,no3,no4;
    no1 = no2 = no3 = no4 = 0;
    int x;cin >> x;
    for (int i = 0 ; i< x;i++)
    {
        int t ; scanf("%d",&t);
        if (t == 4) no4++;
        if (t == 3) no3++;
        if (t == 2) no2++;
        if (t == 1) no1++;
    }
    int t = no4;t+=no2/2;no2%=2;
    while(no1&&no3)
    {no1--;no3--;t++;}
    if(no2&&no1>=2)
    {no2 = 0;no1-=2;t++;}
    if(no1>=4)
    {t += no1/4;no1%=4;}
    int r = 0;
    t += no3;r+= no2;r+=no1;
    if(r>0){t++;}
    cout << t << endl;
	return 0;
}
