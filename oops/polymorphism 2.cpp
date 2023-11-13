#include<bits/stdc++.h>
using namespace std;
class random
{
    public:
    int a;
    int b;
    int operator+(random &obj) //example of polymorphism (operator overloading)
    {
        int value1=a;
        int value2=obj.b;
        return value1-value2;
    }
};
int main()
{
    random r1,r2;
    r1.a=10;
    r2.b=6;
    int c= r1+r2; //i have written '+' but still  it will do '-' bcoz of operator overloading
    cout<<c;
    return 0;
}