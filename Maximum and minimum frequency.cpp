#include<iostream>
using namespace std;

void count(int arr[], int n)
{
	int hash[21] = {0};
	for(int i=0; i<n; i++)
	{
		hash[arr[i]] += 1;
	}
	
	
	int max = 0;
	int min = INT_MAX;
	int maxele;
	int minele;
	for(int i=0; i<n; i++)
	{
		if(hash[i] >max)
		{
			max = hash[i];
			maxele =i;
		}
		if(hash[i] >0 && hash[i]<min)
		{
			
			min = hash[i];
			minele = i;
		}		
	}
	cout << "Max frequency: " << max<<endl;
	cout<<"max item"<<maxele<< endl;
    cout << "Min frequency: " << min <<endl;
	cout<<"min item"<<minele<< endl;
	
	
}

int main()
{
	int arr[10] = {3,3,3,3,4,4,2,2,2,6};
	int n = 10;cd
	count(arr, n);
}
