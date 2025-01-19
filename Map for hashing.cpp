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
    for(auto it : mpp)
    {
    	cout<<it.first <<" "<<it.second<<endl;
	}
	
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
int main()
{
	int n = 5; 

	int arr[5];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	maphash(arr,n);
}
