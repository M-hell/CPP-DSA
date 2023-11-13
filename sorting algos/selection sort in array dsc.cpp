#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
	int arr[5];
	for(i=0;i<5;i++)
	{
		cout<<"\n enter a number--";
		cin>>arr[i];
	}
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[j]>arr[i])
            {
                int swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<"\n "<<arr[i];
    }
    return 0;
}
