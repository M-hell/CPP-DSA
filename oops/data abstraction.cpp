#include<bits/stdc++.h>
using namespace std;
class sum
{
    private:
    int a;
    int b;
    int c;
    public:
    sum()
    {
       //constructor
    }
    ~sum()
    {
        //destructor
    }
    void input()
    {
        cout<<"\n enter two numbers-- "<<endl;
        cin>>a>>b;
    }
    void output()
    {
    	int c;
        c=a+b;
        cout<<endl<<"sum= "<<c;
    }
};
int main()
{
    sum a1;
    a1.input();
    a1.output();
    //this is data encapsulation where the implementation is hidden
    return 0;
}