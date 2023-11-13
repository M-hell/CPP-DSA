#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={8,12,1015,16,17};
    int key;
    cout<<"\n enter a number--";
    cin>>key;
    for(int i=0;i<=4;i++)
    {
        if(arr[i]==key)
        {
            cout<<"\n the given digit is in array...";
            break;
        }
    }
    return 0;
}
