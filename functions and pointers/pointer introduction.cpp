#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout<<"enter a value"<<endl;
    cin>>a;
    int* ptr;
    ptr=&a;
    cout<<"\n ptr="<<ptr<<endl;
    cout<<"\n *ptr="<<*ptr;
    cout<<"\n &a="<<&a;
    return 0;
}
