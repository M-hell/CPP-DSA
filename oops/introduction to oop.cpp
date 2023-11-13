#include<bits/stdc++.h>
#include<string>
using namespace std;
class stadium
{
    private:
    int capacity;
    string name;
    char level;
    string sports;
    public:
    void setside(int capacity1)
    {
    	capacity=capacity1;
        cout<<"\n the side of stadium-- "<<capacity;
    }
    void setname()
    {
        cout<<"\n give a name to the stadium-- ";
        getline(cin,name);
    }
    void setlevel()
    {
        cout<<"\n enter the level-- ";
        cin>>level;
    }
    string getname()
    {
    	cout<<endl;
    	return name;
	}
	char getlevel()
	{
		cout<<endl;
		return level;
	}
	void giveperimeter()
	{
		int p=4*(capacity);
		cout<<"perimeter of the stadium--  "<<p<<endl;
	}
};
int main()
{
    stadium s1; //object created s1
    s1.setside(10); //1st type of setting
    s1.setname(); //2nd type of setting
    s1.setlevel();
    cout<<s1.getname(); //1st type of getting
    cout<<s1.getlevel()<<endl;
    s1.giveperimeter(); //2nd type of getting
    return 0;
}