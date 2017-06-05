#include<bits/stdc++.h>
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
	int n;
	cin >> n;
	int* arr = new int [n];
	int sum = 0;
	for (int i = 0 ; i < n;i++)
    {
        cin >> arr[i];
        sum += arr[i];
	}

    in_sort(arr,n);
    int avr = sum / n;
    int count = 0, f = 0;
    for (int i = n-1;n>-1;i--)
    {
        f += arr[i];
        count ++;
        if (f>sum/2)
        {
            break;
        }
    }
    cout << count << endl;
	return 0;
}
