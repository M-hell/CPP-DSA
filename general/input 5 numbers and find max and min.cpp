#include<iostream>
using namespace std;
int main()
{
  //input 5 numbers and find max and min
  int i,max,min,a;
  cout<<"enter a number-";
  cin>>a;
  max=a;
  min=a;
  for(i=1;i<=4;i++)
  {
    cout<<"\n enter a number a again";
    cin>>a;
    if(a>max)
    {
      max=a;
    }
    if(a<min)
    {
      min=a;
    }
  }
  cout<<"\n max is-"<<max;
  cout<<"\n min is-"<<min;
  return 0;
}  
