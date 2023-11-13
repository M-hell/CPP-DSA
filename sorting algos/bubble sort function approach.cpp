#include<bits/stdc++.h>
using namespace std;
bool sortcheck(int arr[],int n)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				c++;
			}
		}
	}
	if(c>0)
	{
		return false;
	}
	if(c==0)
	{
		return true;
	}
}
int main()
{
	int n;
	cout<<"\nenter the size of array--"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	while(true)
	{
		if(sortcheck(arr,n)==true)
		{
			break;
		}
		if(sortcheck(arr,n)==false)
		{
			for(int i=0;i<n-1;i++)
			{
				for(int j=i+1;j<=i+1;j++)
				{
					if(arr[i]>arr[j])
					{
						int temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<endl<<arr[i]<<endl;
	}
	return 0;
}
