#include<bits/stdc++.h>
using namespace std;
class random
{
    public:
    int age=10;
    void print()
    {
        cout<<age<<endl;
    }
    void print(int a) //example of polymorphism (function overloading)
    {
        cout<<age<<endl;
    }
    int print(double a) //example of polymorphism (function overloading)
    {
        cout<<age<<endl;
        return 0;
    }
};
int main()
{
    random r1;
    r1.print();
    r1.print(1);
    r1.print(1.0);
    return 0;
}