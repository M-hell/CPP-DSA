#include<bits/stdc++.h>
using namespace std;
class hero
{
    public:
    static int keyword; //static keyword
    static int print()  //static function
    {
    	return keyword;//static function can only deal with static keywords
	}
};
int hero::keyword=10; //we have to define static keyword outside class like this
int main()
{
    cout<<hero::keyword<<endl;//printing static keyword without creating a object
    cout<<hero::print();//printing static function without creating a object
    return 0;
}