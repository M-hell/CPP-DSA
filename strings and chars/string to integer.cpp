#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
		
	string s="94 ok nice";
	int ans1=stoi(s); //nice method but does not work all the time
	cout<<endl<<ans1;
	
	
	string s2="123";
	//best method works all the time controls overflow as well
	stringstream convert;
	convert<<s2;
	int ans2=0;
	convert>>ans2;
	cout<<endl<<ans2;
}