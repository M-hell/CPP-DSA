#include<bits/stdc++.h>
using namespace std;
class object
{
   private:
   	int *arr; //way of dynamically creating array pointer
    int top;
    int capacity;
    public:
    object(int c)
    {
    	this->capacity=c;
    	arr=new int[c]; //way of dynamically creating array
    	this->top=-1;
	}
    void push(int val)
    {
    	top++;
    	if(top==capacity)
    	{
    		cout<<"overflow"<<endl;
		}
		else
		{
        arr[top]=val;
        cout<<endl<<"pushed - "<<val<<endl;
    	}
    }
    void pop()
    {
    	top--;
    	if(top==-1)
    	{
    		cout<<endl<<"underflow"<<endl;
		}
        else
        {
        	cout<<endl<<"popped - "<<arr[top]<<endl;
		}
    }
    void top_element()
    {
    	cout<<endl<<arr[top]<<"  is the top element.."<<endl;
	}
    void isempty()
    {
    	if(top==-1)
    	{
    		cout<<endl<<"stack is empty..."<<endl;
		}
		else
		{
			cout<<endl<<"not empty..."<<endl;
		}
	}
	void size()
	{
		cout<<endl<<"size of stack is = "<<capacity<<endl;
	}
};
int main()
{
	object o(3);
	o.size(); //gives the size of the stack
	o.push(10); //enters value in stack
	o.push(20);
	o.push(30);
	o.top_element(); //returns the top most value in stack
	o.push(40); //will return overflow because stack is full
	o.isempty(); //will return not empty
	o.pop();//deletes top most value in stack
	o.pop();
	o.pop();
	o.pop();//will return underflow because no more element is left to pop in stack
    return 0;
}
