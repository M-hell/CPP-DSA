#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,max,min;
    int arr[5];
    cout<<"\n enter a number--";
    cin>>arr[0];
    max=arr[0];
    min=arr[0];
    for(i=1;i<=4;i++)
    {
        cout<<"\n enter a number--";
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"\n the maximum of 5 digits inputted is "<<max<<"\n the lowest of 5 numbers is "<<min;
    return 0;
}
