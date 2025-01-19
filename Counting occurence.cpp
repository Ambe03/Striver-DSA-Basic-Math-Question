#include<iostream>
#include<vector>
using namespace std;

void count(int arr[], int n)
{
	vector<bool> visit(n, false);
	for(int i=0; i<n; i++)
	{
		if(visit[i] == true)
		{
			continue;
		}
		int count =1;
		for(int j=i+1; j<n; j++)
		{
			if(arr[i] == arr[j])
			{
				visit[j] = true;
				count++;
			}
		}
		cout<<arr[i]<<" "<<count <<endl;
		
		
	}
}

//======================================================================================

void hashcount(int arr[], int n)
{
	int hash[15] ={0};
	for(int i=0; i<n; i++)
	{
		hash[arr[i]]+=1;
	}
	
	int q;
	cin>>q;
	while(q--)
	{
		int number;
		cin>>number;
		//fetch
		cout<<hash[number]<<endl;
	}
}

int main()
{
	int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    hashcount(arr, n);
    return 0;
	
}
