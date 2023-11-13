#include<iostream>
using namespace std;
int main()
{
   int i;
   int a;
   cout<<"enter a number more then 5-- ";
   for(i=1;i>=1;i++)
   {
      cin>>a;
      if(a<=5)
      {
         cout<<"\n enter new value more than 5-";
      }
      else
      {
         cout<<"\n input has been submitted.....";
         break;
      }
   }
   return 0;
}
