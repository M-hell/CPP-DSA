#include<iostream>
using namespace std;
bool pytha_check(int,int,int);
bool max_check(int,int,int);
int main()
{
   int a,b,c;
   cout<<"enter three numbers--";
   cin>>a>>b>>c;
   if(max_check(a,b,c)==true)
   {
      cout<<"\n pythagorean triplet";
   }
   else{
      cout<<"\n not a pythagorean triplet";
   }
   return 0;
}
bool max_check(int a,int b,int c)
{
   int max,min,btw;
   if(b>a && c>a && b>c)
   {
      min=a;
      max=b;
      btw=c;
      pytha_check(max,min,btw);
   }
   else if(a>b && a>c && b>c)
   {
      max=a;
      min=c;
      btw=b;
      pytha_check(max,min,btw);
   }
   else
   {
      max=c;
      btw=a;
      min=b;
      pytha_check(max,min,btw);
   }
   if(pytha_check(max,min,btw)==true)
   {
      return true;
   }
   else
   {
      return false;
   }
}
bool pytha_check(int a,int b,int c)
{
   int d;
   d=(b*b)+(c*c);
   if(d==(a*a))
   {
      return true;
   }
   else 
   {
      return false;
   }
}
