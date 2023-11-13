#include<bits/stdc++.h>
using namespace std;
int add(int,int);
int main()
{
    int a=10;
    int b=10;
    int sum=add(a,b); //when i call this above function a memory is allocated in stack and function gets inserted at the top of stack
    cout<<sum;
    return 0;
}
int add(int a,int b)
{
    int sum=a+b;
    return sum;
}
