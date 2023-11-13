#include<bits/stdc++.h>
using namespace std;
int recursionsort(int[],int);
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int flag;
    flag=recursionsort(arr,5);
    if(flag==1)
    {
        cout<<"\n sorted";
    }
    else
    {
        cout<<"\n unsorted";
    }
    return 0;
}
int recursionsort(int arr[],int n)
{
    int prev;
    if(n==1)
    {
        return 1;
    }
    prev=recursionsort(arr+1,n-1);
    if(arr[0]<arr[1] && prev==1)
    {
        return 1;
    }
    else{
        return 0;
    }
}