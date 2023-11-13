#include<bits/stdc++.h>
#include<vector>
using namespace std;
class object
{
    private:
    vector<int>v;
    int currsize;
    int capacity;
    public:
    object(int c)
    {
        this->capacity=c;
        this->currsize=0;
    }
    void enqueue(int data)
    {
       currsize++;
       if(currsize>capacity)
       {
        cout<<endl<<"overflow"<<endl;
       }
       else
       {
        v.push_back(data);
        cout<<endl<<"pushed - "<<data<<endl;
       }
    }
    void dqueue()
    {
        currsize--;
        if(currsize==0)
        {
            cout<<endl<<"underflow"<<endl;
        }
        else
        {
            cout<<endl<<"popped - "<<*v.begin()<<endl; //must use * to get value of begin
            v.erase(v.begin());
        }
    }
    void front()
    {
        cout<<endl<<"front - "<<*v.begin()<<endl;
    }
    void isfull()
    {
        if(currsize==capacity)
    	{
    		cout<<endl<<"full"<<endl;
		}
		else
		{
			cout<<endl<<"not full"<<endl;
		}
    }
    void isempty()
	{
		if(currsize==0)
		{
			cout<<endl<<"empty"<<endl;
		}
		else
		{
			cout<<endl<<"not empty.."<<endl;
		}
	}
	void size()
	{
		cout<<endl<<"size of queue- "<<capacity<<endl;
	}
};
int main()
{
    object o(5);
    o.enqueue(1);
    o.enqueue(2);
    o.enqueue(3);
    o.enqueue(4);
    o.enqueue(5);
    o.isfull();
    o.enqueue(6);
    o.front();
    o.isempty();
    o.dqueue();
    o.dqueue();
    o.dqueue();
    o.dqueue();
    o.dqueue();
    o.dqueue();
    o.isempty();
    o.isfull();
    o.size();
 	return 0;   
}
