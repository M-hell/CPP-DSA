#include<bits/stdc++.h>
using namespace std;
int recursionsum(int);
int main()
{
    int n;
    cout<<"\n enter a number-- ";
    cin>>n;
    cout<<recursionsum(n)<<endl;
    return 0;
}
int recursionsum(int n)
{
   if(n==0)
   {
   	return 0;
   }
   int prevsum=recursionsum(n-1);
   return n+prevsum;
}