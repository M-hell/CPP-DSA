// pattern 1,12,123,1234,12345
#include<iostream>
using namespace std;
int main()
{
   int i;
   int n=0;
   for(i=1;i<=5;i++)
   {
      n=n*10+i;
      cout<<"\n "<<n;
   }
   return 0;
}
