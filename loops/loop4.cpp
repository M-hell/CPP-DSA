//print pattern 1,-3,5,-7,9........25
#include<iostream>
using namespace std;
int main()
{
  int i;
  int sign=-1;
  int n=1;
  for(i=1;i<=26;i=i+2)
  {
   cout<<"\n "<<n;
   n=(i+2)*sign;
   sign=sign*-1;
  }
   return 0;
}
