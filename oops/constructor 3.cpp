#include<bits/stdc++.h>
using namespace std;
class hero
{
    public:
    int health;
    char level;
    hero(int health,char level) //parametric constructor
    {
        this->level=level;
        this->health=health;
        cout<<"\n parametric constructor has been called--"<<endl;
    }
    void print()
    {
        cout<<health<<endl;
        cout<<level<<endl;
    }
};
int main()
{
    hero h1(50,'A'); //calling parametric constructor
    h1.print();
    hero h2(h1); //copying the object by copy constructor here h2 object has copied the attributes and behaviour of h1
    cout<<endl<<" copy construcor has been called"<<endl;
    h2.print();
    return 0;
}