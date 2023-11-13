#include<iostream>
using namespace std;
int prime_check(int);
int main()
{
    //checking a number is prime or not using function method
    int a,flag;
    cout<<"enter a number";
    cin>>a;
    flag=prime_check(a);
    if(flag==1)
    {
        cout<<"the entered number is prime";
    }
    else
    {
        cout<<"the entered number is not prime";
    }
    return 0;
}
int prime_check(int b)
{
    int f,i,c;
    for(i=1;i<=b;i++)
    {
        if(b%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        f=1;
    }
    else{
        f=0;
    }
    return  f;
}
