#include<bits/stdc++.h>
using namespace std;
class hero
{
    public:
    	int health;
    hero() //constructor which gets called automatically 
    {
        cout<<"\n constructor called..."<<endl;
    }
    ~hero() //destructor which gets called automatically
    {
        cout<<"\n destructor called..."<<endl;
    }
    void printf()
    {
    	cout<<"\n enter a value--"<<endl;
    	cin>>health;
    	cout<<"\n value returned--"<<health<<endl;
	}
};
int main()
{
    hero h1;
    h1.printf(); //as soon as the object is created the constructor is called and after work the destructor is called 
    hero *h2=new hero;//dynamic memory allocation
    (*h2).printf();//printing syntax for dma we can also write "h2->printf();"
    delete(h2);//for dynamic allocation we have to deallocate memory ourself
    return 0;
}