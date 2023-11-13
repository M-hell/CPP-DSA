#include<bits/stdc++.h>
using namespace std;
void swap(int,int);
int main()
{
    int a;
    int b;
    cin>>a>>b;
    swap(a,b);
    cout<<endl<<a<<endl<<b;
    return 0;
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
