#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout<<"enter a value= "<<endl;
    cin>>a;
    int* ptr1;
    int** ptr2;
    ptr1=&a;
    ptr2=&ptr1;
    cout<<"\n ptr1= "<<ptr1;
    cout<<"\n *ptr1= "<<*ptr1;
    cout<<"\n &a= "<<&a;
    cout<<"\n &ptr1= "<<&ptr1;
    cout<<"\n ptr2= "<<ptr2;
    cout<<"\n **ptr2= "<<**ptr2;
    return 0;
}
