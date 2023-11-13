#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int n;
    int c=0;
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
            for(j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                    cout<<"\n "<<arr[i]<<"is repeatative element..";
                }
            }
        }
        cout<<"\n the element got repeated "<<c<<" times";
        return 0;
}
