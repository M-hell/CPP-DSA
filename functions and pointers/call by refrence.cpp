#include<bits/stdc++.h>
using namespace std;
void swap(int*,int*);
int main()
{
    int a;
    int b;
    cin>>a>>b;
    int* ptra;
    ptra=&a;
    int* ptrb;
    ptrb=&b;
    swap(ptra,ptrb);
    cout<<endl<<a<<endl<<b;
    return 0;
}
void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
