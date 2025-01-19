#include<bits/stdc++.h>
#include<map>
using namespace std;
 
void maphash(int arr[],int n)
{
	//precompute
	map<int, int> mpp;
	for(int i=0; i<n; i++)
	{
		mpp[arr[i]]++;
	}
	
	//iterate
//	    for(vector<int>::iterator it : mpp)
//	    {
//	    	cout<<it.first <<" "<<it.second<<endl;
//		}
	
	int q;
	cin>>q;
	while(q--)
	{
		int number;
		cin>>number;
		//fetch
		
		if (mpp.find(number) != mpp.end()) {
            cout << mpp[number] << endl;  // Print the frequency of the number
        } else {
            cout << 0 << endl;  // If the number is not found, print 0
        }
	}
}

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

void bubble()
{
	
}
int main()
{
	int arr[5] ={5,4,3,2,1};
	int n=5;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
	
	selection(arr,n);
	
		for(int i=0; i<n; i++)
	{
		cout<<arr[i];
	}
}
