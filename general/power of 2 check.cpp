#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cout<<"enter a number to check weather power of 2 or not--";
    cin>>n;
    while(n>0)
    {
    	n=n/2;
    	if(n==1.0)
    	{
    		break;
		}
	}
    if(n==1)
    {
        cout<<"\n yes power of 2";
    }
    else
    {
        cout<<"not power of 2";
    }
    return 0;
}