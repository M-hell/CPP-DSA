#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number;-";
    cin>>a;
    if(a>=0)
    {
        cout<<"the nuber is- "<<a;
    }
    else
    {
        a=a*-1;
        cout<<"the number is- "<<a;
    }
    return 0;
}
