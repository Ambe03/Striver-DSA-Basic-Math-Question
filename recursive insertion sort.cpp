#include<bits/stdc++.h>
using namespace std;


void insertion(int arr[],int i, int n)
{
	if(i==n)
	{
		return;
	}
	
		int j=i;
		while(j>0 && arr[j-1]>arr[j])
		{
			swap(arr[j-1], arr[j]);
			j--;
		}
	
	insertion(arr, i+1, n);
	
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

    insertion(arr,0, n);
    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
