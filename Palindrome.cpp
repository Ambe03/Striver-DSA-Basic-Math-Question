#include<iostream>
using namespace std;

bool palindrome(int n)
{
    // Write your code here
    int num =n;
    int rev=0;
    while(num>0)
    {
        int digit =num%10;
        rev = (rev * 10) + digit;
        num = num/10;
    }
    if(rev == n)
    {
        return true;
    }
    else
    {
        return false;
    }  
}

int main()
{
	int n;
	cin>>n;
	cout<<palindrome(n);
}
