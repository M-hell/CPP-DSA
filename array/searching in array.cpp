#include<bits/stdc++.h>
using namespace std;
void search(int src,int arr[],int n)
{
    int flag=0;
    int a;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==src)
        {
            flag++;
            a=i;
        }
    }
    if(flag==1)
    {
        cout<<endl<<src<<" ---this no is present in the array its the "<<a<<" th element"<<endl;
    }
    else
    {
        cout<<endl<<"not present in array....";
    }
}
int main()
{
    int n;
    cout<<"enter the array size-- "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the "<<i<<"th element"<<endl;
        cin>>arr[i];
    }
    int src;
    cout<<"enter a number to check if present in array or not--"<<endl;
    cin>>src;
    search(src,arr,n);
    return 0;
}