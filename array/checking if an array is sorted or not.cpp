#include<bits/stdc++.h>
using namespace std;
int checksort(int[]);
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int flag;
    flag=checksort(arr);
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
int checksort(int arr[])
{
    int i,j;
    int c=0;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>=arr[j])
            {
                c++;
            }
        }
    }
    if(c>0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
