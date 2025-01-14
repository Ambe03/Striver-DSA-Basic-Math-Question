#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	int count=0;
	if (n <= 1) 
	{
        return false; 
    }
	for(int i=2; i<=sqrt(n);i++)
	{
		if(n%i == 0)
		{
			return false;
		}
			else
		{
			return true;
		}
	}

	
}

int main()
{
	int n;
	cin>>n;
	cout<<isPrime(n);
}
