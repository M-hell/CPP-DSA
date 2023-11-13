#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int start=0;
	int last=n-1;
	while(start<=last)
	{
		int temp=arr[start];
		arr[start]=arr[last];
		arr[last]=temp;
		start++;
		last--;
	}
	cout<<endl<<"after reversing"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<endl<<arr[i];
	}
	return 0;
}