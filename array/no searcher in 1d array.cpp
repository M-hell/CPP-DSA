#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int,int);
int main()
{
    int n;
    cout<<"\n enter array size--";
    cin>>n;
    int arr[n];
    int i;
    int key;
    for(i=0;i<n;i++)
    {
        cout<<"\n enter a number--";
        cin>>arr[i];
    }
    cout<<"\n enter the digit u need find from the array--";
    cin>>key;
    if(search(arr,n,key)==1)
    {
        cout<<"\n the searched no is on array...";
    }
    else if(search(arr,n,key)==0)
    {
        cout<<"\n the given integer is not array...";
    }
    else{
        cout<<"\n error";
    }
    return 0;
}
int search(int arr[],int n,int key)
{
    int i;
    int c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return 1;
            c++;
        }
    }
    if(c<=0)
    {
        return 0;
    }
}
