#include<iostream>
using namespace std;
//take two input fronm users and return the factorial of those numbers
void factorial_check(int);
int main()
{
    int a,b;
    cout<<"enter two numbers--";
    cin>>a>>b;
    factorial_check(a);
    cout<<"\n";
    factorial_check(b);
    cout<<"\n";
    return 0;
}
void factorial_check( int c)
{
    int i;
    for(i=1;i<=c;i++)
    {
        if(c%i==0)
        {
            cout<<"factorial of "<<c<<"is "<<i;
            cout<<endl;
        }
    }
}
