#include<bits/stdc++.h>
using namespace std;
int main()
{
    //taking input AND OUTPUT IN A 2D array
    int i,j;
    int arr[3][2];
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            cout<<"\n enter a number--";
            cin>>arr[i][j];
        }
    }
    cout<<"\n the out of the 2d array is--";
    cout<<endl;
    for(i=0;i<=2;i++)       //there are 3 rows 
    {
        for(j=0;j<=1;j++)   //ther are 2 columns
        {
            cout<<"\n "<<arr[i][j];
        }
    }
    return 0;
}
