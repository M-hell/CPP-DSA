#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int sum=0;
    int n;
    cout<<"\n enter the siz e of array";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"\n enter a number--";
        cin>>arr[i];
    }
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                sum=sum+arr[j];
                cout<<"\n "<<sum;
            }
            sum=0;
        }
        return 0;
}
