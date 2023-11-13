#include<bits/stdc++.h>
using namespace std;
class hero
{
    public:
    int health;
    hero()            //this is a default constructor
    {
        cout<<"default constructor has been called";  
    }
};
int main()
{
    hero h1; //its get automatically called when an object is created.. 
    return 0;
}