#include<iostream>
using namespace std;
int main()
{
   //pattern6
   int i,j;
   int n;
   cout<<"enter a number-- ";
   cin>>n;
   for ( i = n; i>=1; i--)
   {
      for(j=1;j<=i;j++)
      {
         cout<<" "<<j;
      }
      cout<<endl;
   }
   return 0;
}
