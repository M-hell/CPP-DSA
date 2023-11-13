#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int d;
    int arr[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"\n enter a value--";
            cin>>arr[i][j];
        }
    }
    d=(arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
    cout<<"\n the determinant value of the given determinant is--  "<<d;
    return 0;
}
