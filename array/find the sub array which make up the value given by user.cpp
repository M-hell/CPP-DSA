#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    int sum=0;
    int value;
    cout<<"\n enter array size--";
    cin>>n;
    int arr[n];
    cout<<"\n enter the value to get from adding the subarrays--";
    cin>>value;
    for(i=0;i<n;i++)
    {
        cout<<"\n enter a value--";
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
    	if(arr[i]==value)
    	{
    		cout<<"\n the value can be made by adding the values of subarray..";
            cout<<"\n the value of the sub array is.."<<"\n"<<arr[i];
		}
        for(j=i;j<n;j++)
        {
            sum=sum+arr[j];
             if(sum==value && arr[j]!=value)
        {
            cout<<"\n the value can be made by adding the values of subarray..";
            cout<<"\n the value of the sub array is..";
            for(i=j;j>=0;j--)
            {
                cout<<"\n"<<arr[j];
            }
        }
    }
        sum=0;
    }
    return 0;
}
