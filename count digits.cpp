#include<iostream>
using namespace std;

//1. count digits: Find the number of digits of ‘n’ that evenly divide ‘n’.
		
	int count(int n)
	{
	int num =n;
	int cnt=0;
	while(num>0)
	{
		int digit = num%10;
        if (digit != 0) 
		{
            // cnt+= (n%digit ==0) ;
			if(n%digit==0)
			{
				cnt++;
			}
        }
		num= num/10;
    }
	return cnt;
}

int main()
{
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	cout<<count(n);
	
}


