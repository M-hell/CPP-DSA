#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="i am sammmrat";
	int store=0;
	int count=1;
	char value;
	for(int i=0;i<s.size()-1;i++)
	{
		if(s[i]==' ')
		{
			continue;
		}
		for(int j=i+1;j<s.size();j++)
		{
			if(s[i]==s[j]){
				count++;
			}
		}
		if(count>=store)
		{
			store=count;
			value=s[i];
		}
		count=0;
	}
	cout<<endl<<value<<endl;
}