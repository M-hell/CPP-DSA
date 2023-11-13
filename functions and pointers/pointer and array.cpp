#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3]={10,20,30};
    int* ptr;
    ptr=arr;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<"\n values of array--"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    cout<<"\nvalues of address--"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<ptr<<endl;
        ptr++;
    }
    return 0;
}
