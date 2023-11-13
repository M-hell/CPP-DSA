#include<iostream>
using namespace std;
//add two numbers using function
int add_two(int,int);
int main()
{
    int a,b;
    int sum;
    cout<<"enter two numbers--";
    cin>>a>>b;
    sum=add_two(a,b);
    cout<<"the addition of two numbers is-- "<<sum;
    return 0;
}
int add_two( int c, int d)
{
    int sum1;
    sum1=c+d;
    return sum1;
}
