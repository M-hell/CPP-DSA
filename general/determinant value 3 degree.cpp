#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int d,v,c;
    int dvc;
    int arr[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\n enter a value--";
            cin>>arr[i][j];
        }
    }
    d=arr[0][0]*(arr[1][1]*arr[2][2]-arr[1][2]*arr[2][1]);
    v=arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0]);
    c=arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]);
    dvc=d-v+c;
    cout<<"\n the determinant value of the given determinant is--  "<<dvc;
    return 0;
}
