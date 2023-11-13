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
    return 0;
}