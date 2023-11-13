#include<bits/stdc++.h>
using namespace std;
int main()
{
	int even=0;
	vector<int> v;
	v.push_back(123);
	v.push_back(13);
	v.push_back(901);
	v.push_back(1233);
	v.push_back(1223);
	for(int i=0;i<v.size();i++)
	{
		string stri = to_string(v[i]);
		if(stri.size()%2==0)
		{
			even++;
		}
	}
	cout<<even;
}