#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two no-- ";
    cin>>a>>b;
    int hcf;
    while(b!=0)
    {
        hcf=a%b;
        a=b;
        b=hcf;
    }
    cout<<"\n "<<a;
}