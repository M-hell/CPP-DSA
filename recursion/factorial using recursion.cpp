#include<bits/stdc++.h>
using namespace std;
int factorial(int);
int main()
{
    int n;
    cout<<"\n enter a number to get a factotrial of= ";
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
int factorial(int n)
{
    int prev;
    if(n==0)
    {
        return 1;
    }
    prev=factorial(n-1);
    return n*prev;
}