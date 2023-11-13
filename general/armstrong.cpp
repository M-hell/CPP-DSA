#include<iostream>
using namespace std;
int main()
{
   int a,b;
   int sum=0;
   int cube;
   int r;
   cout<<"\n enter a number-- ";
   cin>>a;
   b=a;
   while(a>0)
   {
      r=a%10;
      cube=r*r*r;
      sum=sum+cube;
      a=a/10;
   }
   if(sum==b)
   {
      cout<<b<<" is armstrong";
   }
   else
   {
      cout<<b<<" is not armstrong";
   }
}

