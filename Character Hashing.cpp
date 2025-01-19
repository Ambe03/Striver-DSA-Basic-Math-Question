#include<iostream>
using namespace std;

void charhash(string s)
{
	int ele;
	int hash[26] = {0};
	for(int i=0; i<s.length(); i++)
	{
		hash[s[i] - 'a']++;
	}
	
	for(int i=0; i<26; i++)
	{
		if(hash[i]>0)
		{
			cout<<"element"<<char(i+'a')<<" "<<"freuency"<<hash[i]<<endl;

		}
	}
	
}
int main()
{
	string s;
	cin>>s;
	charhash( s);
}
