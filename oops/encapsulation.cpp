#include<bits/stdc++.h>
using namespace std;
class random
{
    private:
    int variable1;
    public:
    void setvalue()
    {
        cin>>variable1;
    }
    void getvalue()
    {
        cout<<endl<<variable1;
    }
};
int main()
{
    //we cannot call variable1 directly because it is in private but we can access it through getter and setter
    //this is an example of data encapsulation
    random r;
    r.setvalue();
    r.getvalue();
    return 0;
} 
