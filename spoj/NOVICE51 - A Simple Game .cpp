#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ; cin >> t;
    int n , g = -1;
    while(t--)
    {
        cin >> n;
        while (n)
        {
            if (n%2)
                n-=1;
            else
                n/=2;
            //cout << n << endl;
            g++;
        }
        //cout << g << endl;
        cout << ((g%2==0)? "Aayush" : "Akash") << endl;
        g = -1;
    }

	return 0;
}
