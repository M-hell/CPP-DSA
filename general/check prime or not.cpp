#include<iostream>
using namespace std;
int main()
{
  //check prime or not
  int i,a;
  int c=0;
  cout<<"enter a number-";
  cin>>a;
  for(i=1;i<=a;i++)
  {
    if(a%i==0)
    {
      c++;
    }
  }
  if(c==2)
  {
    cout<<a<<"  is prime";
  }
  else{
    cout<<a<<" is not prime";
  }
  return 0;
}  
