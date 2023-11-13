#include<iostream>
using namespace std;
int main()
{
   //to print fibonacci series
   int t1=0;
   int t2=1;
   int nextterm;
   int i,n;
   cout<<"\nenter no terms--";
   cin>>n;
   cout<<"\n"<<t1<<"\n"<<t2;
   for(i=0;i<=n;i++)
   {
      nextterm=t1+t2;
      t1=t2;
      t2=nextterm;
      cout<<"\n"<<nextterm;
   }
   return 0;
}
