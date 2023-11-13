#include<bits/stdc++.h>
using namespace std;
int recursionpower(int,int);
int main()
{
    int n,p;
    cout<<"\n enter number and power -= ";
    cin>>n>>p;
    cout<<recursionpower(n,p)<<endl;
    return 0;
}
int recursionpower(int n,int p)
{
    int prev;
    if(p==0)
    {
        return 1;
    }
    prev=recursionpower(n,p-1);
    return n*prev;
}