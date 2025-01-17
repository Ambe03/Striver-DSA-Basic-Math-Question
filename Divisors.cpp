#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
    cout<<"the divisors are as follows"<<endl;
	for(int i=1; i<=n; i++)
	{
		if(n%i == 0)
		{
			cout<<i;
			cout<<" ";
		}
	}
	
}
