#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <stdio.h>
#include<inttypes.h>
#include <string.h>
#include <math.h>
typedef long long int LLI;
typedef long double LD;
typedef long long LL;
using namespace std;
void in_sort(int arr[], int length)
{
	int j, temp;
	for (int i = 1; i < length; i++)
	{
		j = i;
		while (j > 0 && arr[j] < arr[j - 1]){
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
}
int main()
{
	string s; int t = 0;
	string e;
	int n[100]; int c = 0;
	string g[100];
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '+')
		{
			//n[c] = int(t - 48);
			n[c] = int(t);
			//g[c] = e;
			c++;
			t = 0;
			//e = "";
		}
		else
		{
			t = t * 10;
			t += (s[i]- 48);
			//e += s[i];
		}
	}
	n[c] = int(t);
	in_sort(n, c + 1);
	for (int i = 0; i < c; i++)
		cout << n[i] << "+";
	cout <<n[c] << endl;
	return 0;
}
