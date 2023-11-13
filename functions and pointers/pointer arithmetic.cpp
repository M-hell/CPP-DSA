#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout<<"enter a value= "<<endl;
    cin>>a;
    int* ptr;
    ptr=&a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;
    return 0;
}
