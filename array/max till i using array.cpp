#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    //max till i;
    int arr[6];
    int i;
    int mx=-1999;
    for(i=0;i<6;i++)
    {
        cout<<"\n enter a number--";
        cin>>arr[i];
    }
    for(i=0;i<6;i++)
    {
       mx=max(mx,arr[i]);
       cout<<"\n"<<mx;
    }
    return 0;
}
