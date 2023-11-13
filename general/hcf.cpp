#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,hcf;
    cout<<"enter two numbers--";
    cin>>a>>b;
    for(int i=2;i<a || i<b;i++)
    {
       if(a%i==0 && b%i==0)
       {
       	hcf=i;
	   }
    }
    cout<<"\n "<<hcf;
    return 0;
}