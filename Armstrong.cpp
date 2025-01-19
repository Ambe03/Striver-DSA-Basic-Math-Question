#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

bool armstrong(int n)
{
	int num = n;
	int sum =0;
	int size =0;
	int count=0;
	
	//APPROACH IST
	    /*
			vector<int> v;
			while(n!=0)
			{
				int digit = num%10;
				num = num/10;
				v.push_back(digit);
				size = v.size();
				sum = sum + pow(digit, size);
			}
			
			if(sum == n)
			{
				return true;
			}
			else
			{
				return false;
			}
		*/
		
		
	//APPROACH IInd
	while(num!=0)
	{
		num/=10;
		count++;
	}
	while(n!=0)
	{
		int digit = n%10;
		sum = sum+ pow(digit, count);
		n= n/10;
	}
	return sum == n;
	
}
int main()
{
	int n;
	cin>>n;
	if(armstrong(n))
	{
		cout<<"true";
	}
	else
	{
		cout<<"False";
	}
}
