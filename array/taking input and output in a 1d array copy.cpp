#include<bits/stdc++.h>
using namespace std;
int main()
{
    //program to input and output in a 1d array 
    int arr[5];
    int i;
    for(i=0;i<=4;i++)
    {
        cout<<"\n enter a number--";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"output of the 1d array--";
    for(i=0;i<=4;i++)
    {
        cout<<"\n"<<arr[i];
    }
    return 0;
}
