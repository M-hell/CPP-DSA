#include<bits/stdc++.h>
using namespace std;
class hero
{
    public:
    int health;
    char level;
    void scan(int health,char level)
    {
        this->health=health;
        this->level=level;
    }
    void print()
    {
        cout<<health<<endl;
        cout<<level<<endl;
    }
};
int main()
{
   hero h1;
   hero h2;
   h1.scan(10,'b');
   h2.scan(20,'a');
   cout<<"before"<<endl;
   h1.print(); //before....
   cout<<endl;
   h2.print();
   cout<<endl;//....
   h2=h1;///assignment operator equals the values of two objects
   cout<<"after assigning"<<endl;
   h1.print(); //after....
   cout<<endl;
   h2.print();
   return 0; 
}