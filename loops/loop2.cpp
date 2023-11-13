//pattern 1,2,4,8,16.....,512
#include<iostream>
using namespace std;
int main()
{
   int i;
   int n=1;
   for(i=1;i<=10;i++)
   {
   	cout<<"\n "<<n;
   	n=n*2;
   }
   return 0;
}
