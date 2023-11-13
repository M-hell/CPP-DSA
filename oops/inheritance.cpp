#include<bits/stdc++.h>
using namespace std;
class human
{
    public:
    int age;
    int height;
    int weight; 
};
class male:public human //this is inheritance here male class is inheriting the properties of human class
{
    public:
    string sport;
    void print()
    {
        cout<<endl<<age<<endl<<height<<endl<<weight<<endl<<sport;
    }
};
class female:public human  //this is inheritance here female class is inheriting the properties of human class
{
    public:
    string kitchen;
    void print()
    {
        cout<<endl<<age<<endl<<height<<endl<<weight<<endl<<kitchen;
    }
};
int main()
{
    male m1;
    female f1;
    m1.age=25;
    m1.height=6;
    m1.sport="cricket";
    m1.weight=75;
    f1.age=34;
    f1.height=4;
    f1.weight=90;
    f1.kitchen="washing";
    cout<<endl<<"male--";
    m1.print();
    cout<<endl<<"female--";
    f1.print();
    return 0;
}