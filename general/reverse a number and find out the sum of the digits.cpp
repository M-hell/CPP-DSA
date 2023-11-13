#include<iostream>
using namespace std;
int main()
{
   //reverse a number and find out the sum of the digits
   int i;
   int reverse=0;
   int mod;
   int sum=0;
   cout<<"enter a number--";
   cin>>i;
   while (i>0)
   {
      mod=i%10;
      reverse=reverse*10+mod;
      sum=sum+mod;
      i=i/10;
   }
   cout<<"reversed no is="<<reverse<<endl;
   cout<<"sum of digits="<<sum<<endl;
   return 0;
}
//loophole in this code is while executing the multiple of 10 it does not work like numbers 500,2000 etc
