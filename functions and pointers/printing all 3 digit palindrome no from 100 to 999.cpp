#include<iostream>
using namespace std;
bool palindrome_check(int);
int main()
{
   //printing all 3 digit palindrome no from 100 to 999
   int i;
   for(i=100;i<=999;i++)
   {
      if(palindrome_check(i)==true)
      {
         cout<<"\n"<<i;
      }
   }
   return 0;
}
bool palindrome_check(int a)
{
   int a1;
   a1=a;
   int rev=0;
   int mod;
   while(a>=1)
   {
      mod=a%10;
      rev=rev*10+mod;
      a=a/10;
   }
   if(a1==rev)
   {
      return true;
   }
   else
   {
      return false;
   }
}
