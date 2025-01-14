#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse(int n)
{
	int num = n;
	int rev = 0;
	while(num!=0)
	{
		
		int digit = num%10;
	    rev = (rev * 10) + digit;
		num = num/10;
	}
	return rev;
}
int main()
{
	int n;
	cin>>n;
	int rev= reverse(n);
	cout<<rev;
}
