#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

void mergearray(vector < int > & arr, int s, int e)
{
    int mid = (s+e) / 2;
    int len1 = mid-s+1;
    int len2= e-mid;

    int* first = new int[len1];
    int* second = new int[len2];
    int mainind = s;
    for(int i=0 ; i<len1; i++)
    {
        first[i] = arr[mainind++];
    }
     for(int i=0 ; i<len2; i++)
    {
        second[i] = arr[mainind++];
    }

    int index1= 0;
    int index2= 0;
    mainind= s;
    while(index1 < len1 && index2< len2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainind++] = first[index1++];
        }
        else
        {
            arr[mainind++] = second[index2++];
        }
    }
    while( index1 < len1)
    {
        arr[mainind++] = first[index1++];
    }
    while(index2 < len2)
    {
        arr[mainind++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}


void merge(int arr[], int low,int mid, int high)
{
	vector<int> temp;

	int left = low;
	int right =mid+1;
	while(left<=mid && right<=high)
	{
	
			if(arr[left]<=arr[right])
			{
				temp.push_back(arr[left]);
				left++;
			}
			else
			{
				temp.push_back(arr[right]);
				right++;
			}
		
	}
	while(left<=mid)
	{
		temp.push_back(arr[left]);
		left++;
	}
	while(right<=high)
	{
		temp.push_back(arr[right]);
		right++;
	}
	
	for(int i = 0; i < temp.size(); i++) 
	{
        arr[low + i] = temp[i];
    }
}

void mergeSort(int arr[],  int low, int high)
{
	if(low>=high)
	{
		return;
	}
	
	int mid = (low+high) / 2;
	mergeSort(arr, low, mid);
	mergeSort(arr, mid+1, high);
	merge(arr,low,mid,high);

	
}
int main()
{
	int arr[5] = {5,4,3,2,1};
	int n=sizeof(arr)/ sizeof(arr[0]);
	cout<<"Before sorting"<<endl;
	print(arr, n);
	int low = 0;
	int high = n-1;
	
	cout<<"after sorting"<<endl;
	mergeSort(arr, low, high);
	print(arr, n);
	
	
}

