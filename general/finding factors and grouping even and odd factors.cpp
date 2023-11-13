#include<iostream>
using namespace std;
int main()
{
  // finding factors and grouping even and odd factors
  int a,i;
  int m=1;
  cout<<"enter the number-";
  cin>>a;
  for(i=1;i<=a;i++)
  {
    if(a%i==0)
    {
      m=m*i;
      if(i%2==0)
      {
        cout<<"\n  is a even factor"<<i;
      }
      else
      {
        cout<<"\n  is a odd factor"<<i;
      }
    }
  }
  cout<<"\n the factorial of the number-"<<a<<"  is -"<<m;
  return 0;
}
