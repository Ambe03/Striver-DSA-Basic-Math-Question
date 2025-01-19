#include<bits/stdc++.h>
#include<map>
using namespace std;
 
void selection(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int mini = i;
		for (int j=i+1; j<n ; j++)
		{
			if( arr[j]<arr[i])
			{
				mini = j;
			}
		}
		int temp = arr[mini];
		arr[mini] = arr[i];
		arr[i] = temp;
	}
}

void bubble(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		int didswap = 0;
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				swap(arr[i], arr[j]);
				didswap = 1;
			}
		}
		if(didswap == 0)
		{
			break;
		}
		  
	}
} 
 
void insertion(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		int j=1;
		while(j>0 && arr[j-1]>arr[j])
		{
			swap(arr[j-1], arr[j]);
			j++;
		}
	
	}
}

int main()
{
	int arr[5] ={5,4,3,2,1};
	int n=5;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
	
	insertion(arr,n);
	
		for(int i=0; i<n; i++)
	{
		cout<<arr[i];
	}
}
