#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)
{
	int didswap=0;
	for(int i=0; i<n-1; i++)
	{
		if(arr[i]>arr[i+1])
		{
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
			didswap = 1;
		}
	}
	if(didswap == 0)
	{
		return;
	}
	
	bubble(arr, n-1);
}


int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble(arr, n);
    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
