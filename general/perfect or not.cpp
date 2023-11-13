#include<iostream>
using namespace std;
int main()
{
  //perfect or not
  int a;
  int sum=0;
  cout<<"enter a number-";
  cin>>a;
  for(int i=1;i<a;i++)
  {
    if(a%i==0)
    {      
      sum=sum+i;
    }
  }
  if(sum==a)
  {
    cout<<a<<" is perfect";
  }
  else{
    cout<<a<<" is not perfect";
  }
  return 0;
}  
