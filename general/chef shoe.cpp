#include<bits/stdc++.h>
using namespace std;
int main()
{
	int leftshoe,friends;
	cin>>friends>>leftshoe;
	if(friends<=leftshoe)
	{
		cout<<friends;
	}
	if(friends>leftshoe)
	{
		int a;
		a=friends*2 - leftshoe;
		cout<<a;
	}
	return 0;
}