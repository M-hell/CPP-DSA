#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void permutation(int arr[])
{
	int i=0;
	int j=0;
    while(j<6)
    {
    	if(j==2)
    	{
    		int k=0;
    		swap(&arr[k],&arr[k+1]);
		}
		if(j==4)
		{
			int k=0;
			swap(&arr[k],&arr[k+2]);
		}
    	cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<endl;
        swap(&arr[i+1],&arr[i+2]);
        j++;
    }
}
int main()
{
    int arr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    cout<<"possible permutations are--"<<endl;
    permutation(arr);
    return 0;
}