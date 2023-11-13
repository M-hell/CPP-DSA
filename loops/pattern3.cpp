#include<iostream>
using namespace std;
int main()
{
   //pattern3
   int i,j;
   for(i=5;i>=1;i--)
   {
      j=i;
      for(j=i;j>=1;j--)
      {
         cout<<"*";
      }
      cout<<endl;
   }
   return 0;
}
